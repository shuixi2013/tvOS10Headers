//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSAttributedString, NSString, TVVolatileImage;

@interface HBTopShelfRepresentation : NSObject <NSCopying>
{
    long long _style;	// 8 = 0x8
    NSString *_applicationIdentifier;	// 16 = 0x10
    TVVolatileImage *_image;	// 24 = 0x18
    NSAttributedString *_attributedText;	// 32 = 0x20
    NSArray *_items;	// 40 = 0x28
    NSArray *_sections;	// 48 = 0x30
}

@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(retain, nonatomic) TVVolatileImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;	// IMP=0x000000010005d534
- (id)logSafeDescription;	// IMP=0x000000010005d1a4
@property(readonly, nonatomic, getter=isContentAvailable) _Bool contentAvailable;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010005ba34
- (unsigned long long)hash;	// IMP=0x000000010005b954
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010005b754
- (id)description;	// IMP=0x000000010005b44c

@end
