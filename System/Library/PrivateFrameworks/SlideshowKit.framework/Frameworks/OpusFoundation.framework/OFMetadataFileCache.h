/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:53 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSMutableDictionary, OFLRUCache;

@interface OFMetadataFileCache : NSObject {

	NSObject*<OS_dispatch_queue> _serialDiskSaveQueue;
	NSString* _diskCacheDirectory;
	NSMutableDictionary* _diskCacheFilePathForIdentifiers;
	OFLRUCache* _memoryCache;
	BOOL _useMemoryCache;
	BOOL _useDiskCache;
	BOOL _useAsynchronousSerialDiskSaveQueue;
	BOOL _allowCleanupOnMemoryWarnings;
	BOOL _allowCleanupOnEnteringBackground;

}

@property (assign,nonatomic) BOOL useMemoryCache;                                  //@synthesize useMemoryCache=_useMemoryCache - In the implementation block
@property (assign,nonatomic) BOOL useDiskCache;                                    //@synthesize useDiskCache=_useDiskCache - In the implementation block
@property (assign,nonatomic) BOOL useAsynchronousSerialDiskSaveQueue;              //@synthesize useAsynchronousSerialDiskSaveQueue=_useAsynchronousSerialDiskSaveQueue - In the implementation block
@property (assign,nonatomic) BOOL allowCleanupOnMemoryWarnings;                    //@synthesize allowCleanupOnMemoryWarnings=_allowCleanupOnMemoryWarnings - In the implementation block
@property (assign,nonatomic) BOOL allowCleanupOnEnteringBackground;                //@synthesize allowCleanupOnEnteringBackground=_allowCleanupOnEnteringBackground - In the implementation block
-(void)dealloc;
-(id)init;
-(void)invalidateMemoryCaches;
-(void)invalidateDiskCaches;
-(id)attributesForIdentifier:(id)arg1 ;
-(id)valueForKey:(id)arg1 andIdentifier:(id)arg2 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 andIdentifier:(id)arg3 ;
-(void)setAttributes:(id)arg1 forIdentifier:(id)arg2 ;
-(id)_diskCacheFilePathForIdentifier:(id)arg1 ;
-(id)initWithDiskCacheDirectory:(id)arg1 ;
-(void)_didReceiveMemoryWarningNotification;
-(void)_didEnterBackgroundNotification;
-(void)_willTerminateNotification;
-(void)purgeDiskCache:(unsigned long long)arg1 progressBlock:(/*^block*/id)arg2 ;
-(BOOL)useAsynchronousSerialDiskSaveQueue;
-(void)setUseAsynchronousSerialDiskSaveQueue:(BOOL)arg1 ;
-(id)_metadataForIdentifier:(id)arg1 ;
-(void)_saveMetadata:(id)arg1 forIdentifier:(id)arg2 ;
-(void)setUseDiskCache:(BOOL)arg1 ;
-(void)setUseMemoryCache:(BOOL)arg1 ;
-(void)invalidateMemoryCacheForIdentifier:(id)arg1 ;
-(void)invalidateDiskCacheForIdentifier:(id)arg1 ;
-(void)setNumberOfMemorySlots:(unsigned long long)arg1 ;
-(BOOL)useMemoryCache;
-(BOOL)useDiskCache;
-(BOOL)allowCleanupOnMemoryWarnings;
-(void)setAllowCleanupOnMemoryWarnings:(BOOL)arg1 ;
-(BOOL)allowCleanupOnEnteringBackground;
-(void)setAllowCleanupOnEnteringBackground:(BOOL)arg1 ;
@end

