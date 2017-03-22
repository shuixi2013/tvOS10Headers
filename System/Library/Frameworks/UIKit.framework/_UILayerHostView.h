/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:23 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class CALayerHost;

@interface _UILayerHostView : UIView

@property (assign,nonatomic) unsigned contextID; 
@property (assign,nonatomic) BOOL inheritsSecurity; 
@property (nonatomic,retain,readonly) CALayerHost * layerHost; 
+(Class)layerClass;
-(void)dealloc;
-(CALayerHost *)layerHost;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(unsigned)contextID;
-(void)setInheritsSecurity:(BOOL)arg1 ;
-(BOOL)inheritsSecurity;
-(void)_compensateForGlobalMediaTimeAdjustmentsIfNecessary;
-(void)_snapshotAdjustedMediaTiming:(id)arg1 ;
-(void)setContextID:(unsigned)arg1 ;
@end

