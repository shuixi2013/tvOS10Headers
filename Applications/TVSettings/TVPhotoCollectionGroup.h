//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface TVPhotoCollectionGroup : NSObject
{
    NSString *_photoCollectionGroupName;	// 8 = 0x8
    NSArray *_photoCollections;	// 16 = 0x10
}

@property(readonly, copy, nonatomic) NSArray *photoCollections; // @synthesize photoCollections=_photoCollections;
- (void).cxx_destruct;	// IMP=0x00000001000786fc
@property(readonly, copy, nonatomic) NSString *photoCollectionGroupName;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000784dc
- (unsigned long long)hash;	// IMP=0x00000001000784b0
- (id)initWithPhotoCollections:(id)arg1;	// IMP=0x0000000100078424
- (id)initWithName:(id)arg1;	// IMP=0x0000000100078398

@end

