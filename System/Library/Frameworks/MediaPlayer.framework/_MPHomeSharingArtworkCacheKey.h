/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:32 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@interface _MPHomeSharingArtworkCacheKey : NSObject {

	unsigned long long _persistentID;
	CGSize _size;

}

@property (nonatomic,readonly) unsigned long long persistentID;              //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,readonly) CGSize size;                                  //@synthesize size=_size - In the implementation block
-(CGSize)size;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)persistentID;
-(id)initWithPersistentID:(unsigned long long)arg1 size:(CGSize)arg2 ;
@end

