/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:55 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <MediaToolbox/FigBaseCALayer.h>

@interface FigSubtitleWebVTTCueCALayer : FigBaseCALayer {

	OpaqueFigSubtitleWebVTTCueCALayerInternal* layerInternal;

}
-(void)finalize;
-(void)dealloc;
-(id)init;
-(void)layoutSublayers;
-(void)drawInContext:(CGContextRef)arg1 ;
-(CGRect)getSuggestedBounds:(unsigned char)arg1 ;
-(void)setCuePosition:(CGPoint)arg1 ;
-(CFStringRef)getContentID;
-(void)setViewport:(CGRect)arg1 ;
-(void)setContent:(CFAttributedStringRef)arg1 ;
-(void)setDefaultFontSize:(double)arg1 ;
-(unsigned char)isDirty;
-(void)setRenderer:(OpaqueFigSubtitleRendererRef)arg1 ;
@end

