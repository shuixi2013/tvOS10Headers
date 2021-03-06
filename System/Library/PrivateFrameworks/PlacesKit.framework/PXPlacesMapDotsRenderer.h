/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:48 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PlacesKit/PlacesKit-Structs.h>
#import <libobjc.A.dylib/PXPlacesMapOverlayRenderer.h>

@protocol PXPlacesMapPipelineComponentProvider, PXPlacesGeotaggedItemDataSource;
@class NSString;

@interface PXPlacesMapDotsRenderer : NSObject <PXPlacesMapOverlayRenderer> {

	id<PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;
	id<PXPlacesGeotaggedItemDataSource> _dataSource;

}

@property (__weak) id<PXPlacesGeotaggedItemDataSource> dataSource;                                                   //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PXPlacesMapPipelineComponentProvider> pipelineComponentProvider; 
@property (readonly) UIEdgeInsets minimumEdgeInsets; 
-(void)setDataSource:(id<PXPlacesGeotaggedItemDataSource>)arg1 ;
-(id<PXPlacesGeotaggedItemDataSource>)dataSource;
-(void)reset;
-(long long)annotationType;
-(UIEdgeInsets)minimumEdgeInsets;
-(id<PXPlacesMapPipelineComponentProvider>)pipelineComponentProvider;
-(void)setPipelineComponentProvider:(id<PXPlacesMapPipelineComponentProvider>)arg1 ;
-(id)rendererForOverlay:(id)arg1 andMapView:(id)arg2 ;
-(id)overlayForLayoutItem:(id)arg1 ;
@end

