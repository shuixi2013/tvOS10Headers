/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:17 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOTileKeyMap : NSObject {

	long long _type;
	void* _map;

}
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(id)objectForKey:(const GEOTileKey*)arg1 ;
-(void)removeObjectForKey:(const GEOTileKey*)arg1 ;
-(void)setObject:(id)arg1 forKey:(const GEOTileKey*)arg2 ;
-(id)initWithMapType:(long long)arg1 ;
-(void)reserveCapacity:(unsigned long long)arg1 ;
-(id)contentsDescription;
@end

