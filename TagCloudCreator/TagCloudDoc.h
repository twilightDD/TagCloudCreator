//
//  TagCloudDoc.h
//  TagCloudCreator
//
//  Created by Ingo Kasprzak on 11.05.11.
//  Copyright 2011 Silutions. All rights reserved.
//

#import <Cocoa/Cocoa.h>
@class TagCloudView;
@class TagGroup, Tag;

@interface TagCloudDoc : NSPersistentDocument <NSOutlineViewDataSource, NSOutlineViewDelegate, NSWindowDelegate> {
@private
	IBOutlet NSOutlineView *tagTree;
	IBOutlet TagCloudView *tagCloudView;
	IBOutlet NSSlider *sizeSlider;
	IBOutlet NSTextField *sizeTextField;
	TagGroup *selectedItemForColorEdit;
	NSArray *tagGroups;
}
@property (readonly, retain) NSArray *tagGroups;
@property (readonly, retain) NSArray *tags;


- (TagGroup*)addTagGroup;
- (Tag*)addTagToGroup:(TagGroup*)tagGroup;
- (NSArray*)shuffleAllTags;
- (void)drawCloudWithTags:(NSArray*)tags;

- (IBAction)pushShuffle:(id)sender;
- (IBAction)pushRedraw:(id)sender;
- (IBAction)pushAddGroup:(id)sender;
- (IBAction)pushAddItem:(id)sender;
- (IBAction)pushRemoveItem:(id)sender;
- (IBAction)pushSlider:(id)sender;

@end
