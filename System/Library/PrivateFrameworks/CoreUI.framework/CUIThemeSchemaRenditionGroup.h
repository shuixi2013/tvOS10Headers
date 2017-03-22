/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:00 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class CUIRenditionKey, NSArray;

@interface CUIThemeSchemaRenditionGroup : NSObject {

	CUIRenditionKey* _baseKey;
	NSArray* _renditions;
	SCD_Struct_CU29* _part;

}

@property (nonatomic,retain) NSArray * renditions;              //@synthesize renditions=_renditions - In the implementation block
+(id)renditionGroupsForRenditions:(id)arg1 part:(SCD_Struct_CU29*)arg2 ;
-(id)initWithRenditions:(id)arg1 part:(SCD_Struct_CU29*)arg2 ;
-(NSArray *)renditions;
-(void)setRenditions:(NSArray *)arg1 ;
-(long long)partFeatures;
-(id)themeSchemaLayers;
-(void)addLayoutMetricsToPSDImageRef:(id)arg1 withRendition:(id)arg2 ;
-(id)schemaLayersAndLayerGroups;
-(id)_renditionsSortedIntoLayers;
-(id)_layerNameForDrawingLayer:(long long)arg1 ;
-(id)_layerNameForState:(long long)arg1 ;
-(void)addStatesAndDrawingLayersToPSDLayers:(id)arg1 forPresentationState:(unsigned long long)arg2 ;
-(void)addValueOrDim1LayersToPSDLayers:(id)arg1 forPresentationState:(unsigned long long)arg2 state:(unsigned long long)arg3 drawingLayer:(unsigned long long)arg4 ;
-(id)mutablePSDImageRef;
-(id)mutablePSDImageRefColumnStyle;
-(void)dealloc;
-(id)description;
-(id)baseKey;
@end

