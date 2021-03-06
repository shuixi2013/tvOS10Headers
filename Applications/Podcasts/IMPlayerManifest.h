//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMPlayerItem, NSObject<OS_dispatch_queue>, NSString, NSUserActivity;

@interface IMPlayerManifest : NSObject
{
    _Bool _isLoaded;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    unsigned long long _currentIndex;	// 24 = 0x18
    IMPlayerItem *_currentItem;	// 32 = 0x20
    NSUserActivity *_activity;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
}

+ (void)registerManifestForRestoration:(Class)arg1;	// IMP=0x0000000100232258
+ (id)_activityType;	// IMP=0x000000010023218c
+ (id)activityTypeSuffix;	// IMP=0x0000000100232184
+ (id)supportedActivityTypes;	// IMP=0x0000000100232170
+ (id)restoreActivity:(id)arg1;	// IMP=0x0000000100232064
+ (id)createManifestForActivity:(id)arg1;	// IMP=0x000000010023205c
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSUserActivity *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) IMPlayerItem *currentItem; // @synthesize currentItem=_currentItem;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) _Bool isLoaded; // @synthesize isLoaded=_isLoaded;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;	// IMP=0x0000000100232624
- (id)description;	// IMP=0x0000000100232374
- (void)postManifestDidChangeNotification;	// IMP=0x000000010023231c
@property(readonly, nonatomic) unsigned long long count;
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100231d38
- (void)previous;	// IMP=0x0000000100231a60
- (_Bool)hasPrevious;	// IMP=0x0000000100231a3c
- (void)next;	// IMP=0x00000001002319e0
- (_Bool)hasNext;	// IMP=0x000000010023199c
- (void)_load;	// IMP=0x0000000100231998
- (void)load:(CDUnknownBlockType)arg1;	// IMP=0x00000001002317a0
- (id)init;	// IMP=0x0000000100231690

@end

