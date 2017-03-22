/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSLayoutXAxisAnchor, NSLayoutYAxisAnchor;

@interface NSLayoutPoint : NSObject <NSCopying, NSCoding> {

	NSLayoutXAxisAnchor* _xAxisAnchor;
	NSLayoutYAxisAnchor* _yAxisAnchor;

}

@property (copy,readonly) NSLayoutXAxisAnchor * xAxisAnchor;              //@synthesize xAxisAnchor=_xAxisAnchor - In the implementation block
@property (copy,readonly) NSLayoutYAxisAnchor * yAxisAnchor;              //@synthesize yAxisAnchor=_yAxisAnchor - In the implementation block
+(id)layoutPointWithXAxisAnchor:(id)arg1 yAxisAnchor:(id)arg2 ;
+(id)pointWithXAxisAnchor:(id)arg1 yAxisAnchor:(id)arg2 ;
-(CGPoint)valueInItem:(id)arg1 ;
-(id)initWithXAxisAnchor:(id)arg1 yAxisAnchor:(id)arg2 ;
-(NSLayoutXAxisAnchor *)xAxisAnchor;
-(NSLayoutYAxisAnchor *)yAxisAnchor;
-(id)layoutPointByOffsettingWithXOffset:(double)arg1 yOffset:(double)arg2 ;
-(id)layoutPointByOffsettingWithXOffsetDimension:(id)arg1 yOffsetDimension:(id)arg2 ;
-(id)constraintsEqualToLayoutPoint:(id)arg1 ;
-(id)pointByOffsettingWithXOffset:(double)arg1 yOffset:(double)arg2 ;
-(id)pointByOffsettingWithXOffsetDimension:(id)arg1 yOffsetDimension:(id)arg2 ;
-(id)constraintsEqualToPoint:(id)arg1 ;
-(id)relationshipEqualToLayoutPoint:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

