/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:55 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKMediaItem.h>

@interface OKMediaFileSystemItem : OKMediaItem
+(id)scheme;
+(id)urlForMediaObject:(id)arg1 ;
-(id)initWithFileURL:(id)arg1 ;
-(id)resourceURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)importMediaToDirectoryURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)createMetadataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)createThumbnailImageForResolution:(unsigned long long)arg1 withMetadata:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)avAssetWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)wantsTemporaryDiskCache;
-(BOOL)wantsDiskCachedMetadata;
-(BOOL)wantsDiskCachedThumbnailForResolution:(unsigned long long)arg1 ;
-(id)mediaObject;
-(void)setMediaObject:(id)arg1 ;
-(id)_primaryURL;
-(id)parseDate:(id)arg1 ;
-(id)_secondaryURL;
@end

