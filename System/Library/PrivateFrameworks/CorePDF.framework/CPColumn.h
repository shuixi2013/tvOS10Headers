/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:30 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPRegion.h>

@interface CPColumn : CPRegion {

	BOOL hasCentredParagraph;
	BOOL hasColumnBreak;
	double maxLeftPad;
	double maxRightPad;
	double maxRight;
	double minLeft;
	BOOL complete;

}

@property (assign) BOOL complete; 
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)complete;
-(void)setComplete:(BOOL)arg1 ;
-(void)accept:(id)arg1 ;
-(CGRect)columnBounds;
-(double)leftPad;
-(double)rightPad;
-(double)selectionBottom;
-(void)setHasColumnBreak:(BOOL)arg1 ;
-(BOOL)isBoxRegion;
-(BOOL)isGraphicalRegion;
-(BOOL)isRowRegion;
-(void)setIsImageRegion:(BOOL)arg1 ;
-(BOOL)isImageRegion;
-(BOOL)isShapeRegion;
-(double)bottomBaseline;
-(BOOL)hasCentredParagraph;
-(void)setHasCentredParagraph:(BOOL)arg1 ;
-(double)maxLeftPad;
-(void)setMaxLeftPad:(double)arg1 ;
-(double)maxRightPad;
-(void)setMaxRightPad:(double)arg1 ;
-(CGRect)paddedBounds;
-(int)outOrder;
-(int)inOrder;
@end

