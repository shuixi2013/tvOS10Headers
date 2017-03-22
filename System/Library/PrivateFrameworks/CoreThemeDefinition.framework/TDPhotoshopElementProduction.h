/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:16 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreThemeDefinition/TDElementProduction.h>
#import <libobjc.A.dylib/TDElementAttributes.h>

@class NSMutableAttributedString, CUIPSDImageRef, NSDate, CUIImage, TDPhotoshopAsset;

@interface TDPhotoshopElementProduction : TDElementProduction <TDElementAttributes> {

	NSMutableAttributedString* log;
	CUIPSDImageRef* psdImageRef;
	NSDate* _cachedImageDate;
	CUIImage* _edgeMetricsMask;
	CUIImage* _textMetricsMask;
	CUIImage* _baselineMetricsMask;
	CUIImage* _auxiliary1MetricsMask;
	CUIImage* _auxiliary2MetricsMask;
	BOOL _didCheckForMetricsMasks;

}

@property (nonatomic,retain) TDPhotoshopAsset * asset; 
+(unsigned)sliceRowsPerRendition:(long long)arg1 ;
+(unsigned)sliceColumnsPerRendition:(long long)arg1 ;
-(id)relativePath;
-(void)dealloc;
-(id)isActive;
-(void)setIsActive:(id)arg1 ;
-(id)log;
-(id)columnCount;
-(void)setColumnCount:(id)arg1 ;
-(id)rowCount;
-(void)setRowCount:(id)arg1 ;
-(void)copyAttributesInto:(id)arg1 ;
-(id)copyDataFromAttributes;
-(void)setAttributesFromCopyData:(id)arg1 ;
-(id)baseKeySpec;
-(void)addDrawingLayerIndex:(id)arg1 themeLayer:(id)arg2 toIndices:(id)arg3 layers:(id)arg4 lowestIndex:(long long*)arg5 ;
-(id)psdImageRefWithDocument:(id)arg1 ;
-(void)_loadMetricsMasksWithDocument:(id)arg1 ;
-(void)appendToLog:(id)arg1 ;
-(void)getDrawingLayerIndices:(id*)arg1 themeLayers:(id*)arg2 lowestIndex:(long long*)arg3 ;
-(void)fillIterationKeyAttribute:(id)arg1 iteration:(int)arg2 rowOrColumn:(int)arg3 document:(id)arg4 ;
-(id)dataFromAttributes;
-(void)setAttributesFromData:(id)arg1 ;
-(id)_layerMappingForPhotoshopLayer:(long long)arg1 drawingLayer:(long long)arg2 ;
-(id)columnIterationType;
-(id)rowIterationType;
-(void)setColumnIterationType:(id)arg1 ;
-(void)setRowIterationType:(id)arg1 ;
-(id)associatedFileURLWithDocument:(id)arg1 ;
-(id)edgeMetricsMaskWithDocument:(id)arg1 ;
-(id)textMetricsMaskWithDocument:(id)arg1 ;
-(id)baselineMetricsMaskWithDocument:(id)arg1 ;
-(id)auxiliary1MetricsMaskWithDocument:(id)arg1 ;
-(id)auxiliary2MetricsMaskWithDocument:(id)arg1 ;
-(BOOL)generateRenditionsWithEntityName:(id)arg1 document:(id)arg2 errorDescription:(id*)arg3 ;
-(void)deleteRenditionsInDocument:(id)arg1 shouldDeleteAssetFiles:(BOOL)arg2 ;
@end

