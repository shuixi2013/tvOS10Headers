/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:04 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, NSArray;

@interface TIAsset : NSObject {

	long long _numberOfAssertions;
	NSString* _type;
	NSString* _inputModeLevel;
	NSURL* _url;
	long long _contentVersion;
	long long _compatibilityVersion;
	NSArray* _contents;
	unsigned long long _sizeInBytes;

}

@property (nonatomic,readonly) NSString * type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * inputModeLevel;                   //@synthesize inputModeLevel=_inputModeLevel - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                 //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) long long contentVersion;                    //@synthesize contentVersion=_contentVersion - In the implementation block
@property (nonatomic,readonly) long long compatibilityVersion;              //@synthesize compatibilityVersion=_compatibilityVersion - In the implementation block
@property (nonatomic,readonly) NSArray * contents;                          //@synthesize contents=_contents - In the implementation block
@property (nonatomic,readonly) BOOL isCompatible; 
@property (nonatomic,readonly) unsigned long long sizeInBytes;              //@synthesize sizeInBytes=_sizeInBytes - In the implementation block
+(long long)supportedCompatibilityVersion;
+(id)knownAssetTypes;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSURL *)url;
-(NSString *)type;
-(NSArray *)contents;
-(id)recursiveDescription;
-(id)initWithASAsset:(id)arg1 ;
-(id)initWithType:(id)arg1 level:(id)arg2 url:(id)arg3 contentVersion:(long long)arg4 compatibilityVersion:(long long)arg5 sizeInBytes:(unsigned long long)arg6 contents:(id)arg7 ;
-(id)assetContentItemsForInputModeLevels:(id)arg1 contentType:(id)arg2 ;
-(id)laterAsset:(id)arg1 ;
-(BOOL)isCompatible;
-(void)addAssertion;
-(void)removeAssertion;
-(BOOL)hasAssertions;
-(NSString *)inputModeLevel;
-(unsigned long long)sizeInBytes;
-(long long)contentVersion;
-(long long)compatibilityVersion;
@end

