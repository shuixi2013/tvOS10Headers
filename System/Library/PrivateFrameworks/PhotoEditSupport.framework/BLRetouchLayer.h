/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:37 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
@class BLBaseLayerStack, NSData;

@interface BLRetouchLayer : NSObject {

	BOOL _enabled;
	int _brushType;
	BLRetouchLayer* _layerBelow;
	BLBaseLayerStack* _layerStack;

}

@property (nonatomic,readonly) CGSize imageSize; 
@property (assign,nonatomic) BOOL enabled;                               //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) BOOL hasLayerMask; 
@property (assign,nonatomic) NSData * layerData; 
@property (assign,nonatomic) int brushType;                              //@synthesize brushType=_brushType - In the implementation block
@property (assign,nonatomic) BLRetouchLayer * layerBelow;                //@synthesize layerBelow=_layerBelow - In the implementation block
@property (assign,nonatomic) BLBaseLayerStack * layerStack;              //@synthesize layerStack=_layerStack - In the implementation block
+(id)layer;
-(BOOL)hasLayerMask;
-(BOOL)enabled;
-(id)init;
-(BOOL)boolForKey:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(CGSize)imageSize;
-(void)setLayerStack:(BLBaseLayerStack *)arg1 ;
-(BLBaseLayerStack *)layerStack;
-(CGImageRef)newImageForRect:(CGRect)arg1 inDestRect:(CGRect)arg2 andScale:(double)arg3 ;
-(BLRetouchLayer *)layerBelow;
-(CGContextRef)newContextForRect:(CGRect)arg1 inDestRect:(CGRect)arg2 andScale:(double)arg3 ;
-(NSData *)layerData;
-(void)setLayerData:(NSData *)arg1 ;
-(int)brushType;
-(void)setBrushType:(int)arg1 ;
-(void)setLayerBelow:(BLRetouchLayer *)arg1 ;
@end

