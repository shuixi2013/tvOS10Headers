/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:30 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPChunk.h>
#import <libobjc.A.dylib/CPDisposable.h>

@interface CPTableCell : CPChunk <CPDisposable> {

	CGRect cellBounds;
	SCD_Struct_CP17 rowSpan;
	SCD_Struct_CP17 columnSpan;
	SCD_Struct_CP18* borders;
	CGColorRef backgroundColor;
	unsigned backgroundGraphicCount;
	id* backgroundGraphics;

}

@property (nonatomic,readonly) CGRect cellBounds; 
@property (assign,nonatomic) SCD_Struct_CP17 rowSpan; 
@property (assign,nonatomic) SCD_Struct_CP17 columnSpan; 
@property (nonatomic,readonly) unsigned backgroundGraphicCount; 
-(void)finalize;
-(void)setRowSpan:(SCD_Struct_CP17)arg1 ;
-(SCD_Struct_CP17)columnSpan;
-(SCD_Struct_CP17)rowSpan;
-(CGColorRef)backgroundColor;
-(void)dealloc;
-(id)initWithBounds:(CGRect)arg1 ;
-(CGRect)cellBounds;
-(CGRect)boundsOfBorder:(int)arg1 ;
-(CGColorRef)colorOfBorder:(int)arg1 ;
-(void)setBackgroundGraphics:(id)arg1 ;
-(id)backgroundGraphicAtIndex:(unsigned)arg1 ;
-(unsigned)backgroundGraphicCount;
-(void)setBorder:(int)arg1 bounds:(CGRect)arg2 graphics:(id)arg3 ;
-(unsigned)graphicCountOfBorder:(int)arg1 ;
-(id)graphicObjectOfBorder:(int)arg1 atIndex:(unsigned)arg2 ;
-(long long)compareCellOrdinal:(id)arg1 ;
-(void)setColumnSpan:(SCD_Struct_CP17)arg1 ;
-(void)dispose;
@end

