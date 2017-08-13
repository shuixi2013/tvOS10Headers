//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableSet, NSString;

@interface MTLibraryEntityChanges : NSObject <NSCopying>
{
    NSString *_entityName;	// 8 = 0x8
    NSMutableSet *_insertedUuids;	// 16 = 0x10
    NSMutableSet *_deletedUuids;	// 24 = 0x18
    NSMutableSet *_updatedUuids;	// 32 = 0x20
}

@property(retain, nonatomic) NSMutableSet *updatedUuids; // @synthesize updatedUuids=_updatedUuids;
@property(retain, nonatomic) NSMutableSet *deletedUuids; // @synthesize deletedUuids=_deletedUuids;
@property(retain, nonatomic) NSMutableSet *insertedUuids; // @synthesize insertedUuids=_insertedUuids;
@property(readonly, nonatomic) NSString *entityName; // @synthesize entityName=_entityName;
- (void).cxx_destruct;	// IMP=0x000000010002e788
- (void)addUuid:(id)arg1 changeType:(int)arg2;	// IMP=0x000000010002e56c
- (void)combineChanges:(id)arg1;	// IMP=0x000000010002e45c
- (_Bool)hasUpdates;	// IMP=0x000000010002e40c
- (_Bool)hasDeletes;	// IMP=0x000000010002e3bc
- (_Bool)hasInserts;	// IMP=0x000000010002e36c
- (_Bool)hasChanges;	// IMP=0x000000010002e314
- (id)description;	// IMP=0x000000010002e260
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010002e0d8
- (id)initWithEntityName:(id)arg1;	// IMP=0x000000010002dfbc

@end
