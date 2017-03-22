/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:48 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSArray;

@interface SSVPlaybackAsset : NSObject {

	NSDictionary* _assetDictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * assetDictionary;              //@synthesize assetDictionary=_assetDictionary - In the implementation block
@property (nonatomic,readonly) NSString * downloadKey; 
@property (nonatomic,readonly) NSString * flavor; 
@property (nonatomic,readonly) NSString * URLString; 
@property (nonatomic,readonly) NSArray * sinfs; 
-(id)initWithAssetDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)URLString;
-(NSDictionary *)assetDictionary;
-(NSString *)flavor;
-(NSArray *)sinfs;
-(NSString *)downloadKey;
@end

