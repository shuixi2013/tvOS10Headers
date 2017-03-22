/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:53 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKCustomFeatureAnnotation.h>

@class VKCustomFeature, NSString;

@interface _MKPlaceInlineMapCustomFeature : NSObject <MKCustomFeatureAnnotation> {

	VKCustomFeature* _feature;
	CGSize _coordinate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGSize coordinate; 
@property (assign,nonatomic) double course; 
@property (nonatomic,readonly) BOOL showsBalloonCallout; 
-(CGSize)coordinate;
-(void)setCoordinate:(CGSize)arg1 ;
-(id)feature;
-(BOOL)showsBalloonCallout;
-(id)initWithCustomFeature:(id)arg1 coordinate:(CGSize)arg2 ;
@end

