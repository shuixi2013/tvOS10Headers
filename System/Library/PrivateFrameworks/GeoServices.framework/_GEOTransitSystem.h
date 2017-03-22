/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:26 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOTransitSystem.h>

@class NSString, GEOPBTransitSystem, GEOStyleAttributes;

@interface _GEOTransitSystem : NSObject <GEOTransitSystem> {

	GEOPBTransitSystem* _system;

}

@property (nonatomic,readonly) GEOStyleAttributes * styleAttributes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> artwork; 
-(void)dealloc;
-(NSString *)name;
-(unsigned long long)muid;
-(GEOStyleAttributes *)styleAttributes;
-(id<GEOTransitArtworkDataSource>)artwork;
-(id)initWithSystem:(id)arg1 ;
@end

