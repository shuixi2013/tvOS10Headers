/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:19 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOResource, NSArray, NSString, NSData;

@interface GEOResourceInfo : NSObject {

	GEOResource* _resource;
	NSArray* _equivalentResources;
	BOOL _allowResumingPartialDownload;

}

@property (assign,setter=_setAllowResumingPartialDownload:,getter=_allowResumingPartialDownload,nonatomic) BOOL allowResumingPartialDownload;              //@synthesize allowResumingPartialDownload=_allowResumingPartialDownload - In the implementation block
@property (nonatomic,copy) NSArray * equivalentResources;                                                                                                  //@synthesize equivalentResources=_equivalentResources - In the implementation block
@property (nonatomic,readonly) GEOResource * resource;                                                                                                     //@synthesize resource=_resource - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) NSData * checksum; 
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(int)type;
-(NSData *)checksum;
-(NSArray *)equivalentResources;
-(GEOResource *)resource;
-(void)_setAllowResumingPartialDownload:(BOOL)arg1 ;
-(BOOL)_allowResumingPartialDownload;
-(void)setEquivalentResources:(NSArray *)arg1 ;
-(id)initWithResource:(id)arg1 ;
@end

