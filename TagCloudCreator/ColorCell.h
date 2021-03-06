//
//  ColorCell.h
//  TagCloudCreator
//
//  Created by Ingo Kasprzak on 11.05.11.
//  Copyright 2011 Silutions. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ColorCell : NSActionCell {
@private
	NSColor *color;
	NSColorWell *colorWell;
}
@property (nonatomic, retain) NSColor *color;
@property (readonly, nonatomic, retain) NSColorWell *colorWell;

- (void)setObjectValue:(id <NSCopying>)object;
- (id)objectValue;

@end
