/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:11 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPDTip, NSString;

@interface GEOMapItemTip : NSObject {

	GEOPDTip* _geoTip;

}

@property (nonatomic,retain) GEOPDTip * geoTip;                          //@synthesize geoTip=_geoTip - In the implementation block
@property (nonatomic,readonly) BOOL hasTipTime; 
@property (nonatomic,readonly) double tipTime; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * localizedSnippet; 
@property (nonatomic,readonly) NSString * bestImageURL; 
@property (nonatomic,readonly) BOOL hasTipId; 
@property (nonatomic,readonly) NSString * tipId; 
-(void)dealloc;
-(NSString *)name;
-(id)initWithGEOPDTip:(id)arg1 ;
-(NSString *)localizedSnippet;
-(BOOL)hasTipTime;
-(double)tipTime;
-(NSString *)bestImageURL;
-(BOOL)hasTipId;
-(NSString *)tipId;
-(GEOPDTip *)geoTip;
-(void)setGeoTip:(GEOPDTip *)arg1 ;
@end

