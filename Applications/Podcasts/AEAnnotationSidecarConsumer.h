//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEAnnotationSidecarProducer.h"

@class NSArray, NSMutableSet, NSString;

@interface AEAnnotationSidecarConsumer : AEAnnotationSidecarProducer
{
    NSArray *_bookmarks;	// 32 = 0x20
    NSString *_timestamp;	// 40 = 0x28
    NSMutableSet *_acknowledgedMismatchingAssetIDs;	// 48 = 0x30
}

+ (id)doesNotExistTimestamp;	// IMP=0x00000001001ffbac
+ (id)modificationDatesFromDictionaryRepresentations:(id)arg1;	// IMP=0x00000001001fece0
+ (id)annotationUuidsFromDictionaryRepresentations:(id)arg1;	// IMP=0x00000001001feb4c
- (_Bool)acknowledgeMergingAnnotationsWithAssetVersionMismatch:(id)arg1 assetID:(id)arg2 provider:(id)arg3;	// IMP=0x00000001002000fc
- (void)read;	// IMP=0x00000001001ffe8c
- (void)cacheTimestamp;	// IMP=0x00000001001ffd6c
- (_Bool)isChangedGeneration;	// IMP=0x00000001001ffd64
- (_Bool)isChangedTimestamp;	// IMP=0x00000001001ffd5c
- (id)fileTimestamp;	// IMP=0x00000001001ffbf4
- (id)timestampCacheKey;	// IMP=0x00000001001ffbb8
- (void)mergeIntoAnnotationProvider:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001001fee7c
- (void)dealloc;	// IMP=0x00000001001feab0

@end
