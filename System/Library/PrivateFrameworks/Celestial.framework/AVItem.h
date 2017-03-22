/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:56 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@interface AVItem : NSObject {

	AVItemPrivate* _priv;

}
+(id)avItem;
+(id)avItemWithPath:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)init;
-(double)duration;
-(id)url;
-(id)path;
-(BOOL)setAttribute:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)initWithPath:(id)arg1 error:(id*)arg2 ;
-(CGSize)naturalSize;
-(BOOL)setPath:(id)arg1 error:(id*)arg2 ;
-(void)stopDownload;
-(long long)eqPreset;
-(id)formatDetailsForTracks;
-(id)nextThumbnailTimesStartingAt:(double)arg1 minimumInterval:(double)arg2 forwards:(BOOL)arg3 maxCount:(long long)arg4 ;
-(id)evenlySpacedThumbnailTimesFromStartTime:(double)arg1 toEndTime:(double)arg2 maxCount:(long long)arg3 ;
-(id)urlFromPath:(id)arg1 ;
-(int)_instantiateItem;
-(void)setEQPreset:(long long)arg1 ;
-(id)chapterImageForImageID:(long long)arg1 ;
-(void*)downloadThread;
-(int)beginDownloading;
-(int)downloadStatus;
-(float)downloadProgress;
-(id)accessLog;
-(id)errorLog;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(id)attributeForKey:(id)arg1 ;
-(id)initWithError:(id*)arg1 ;
-(void)cancelDownload;
@end

