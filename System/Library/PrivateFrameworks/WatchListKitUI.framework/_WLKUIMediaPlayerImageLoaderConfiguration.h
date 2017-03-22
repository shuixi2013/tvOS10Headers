/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:10:01 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WatchListKitUI/WatchListKitUI-Structs.h>
@class NSNumber, NSURL;

@interface _WLKUIMediaPlayerImageLoaderConfiguration : NSObject {

	BOOL _screenshot;
	NSNumber* _persistentidentifier;
	NSURL* _sourceURL;
	NSNumber* _storeIdentifier;
	CGSize _imageSize;

}

@property (assign,getter=isScreenshot,nonatomic) BOOL screenshot;              //@synthesize screenshot=_screenshot - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                                 //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,copy) NSNumber * persistentidentifier;                    //@synthesize persistentidentifier=_persistentidentifier - In the implementation block
@property (nonatomic,copy) NSURL * sourceURL;                                  //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,copy) NSNumber * storeIdentifier;                         //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
-(NSNumber *)storeIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(CGSize)imageSize;
-(void)setSourceURL:(NSURL *)arg1 ;
-(NSURL *)sourceURL;
-(void)setStoreIdentifier:(NSNumber *)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(BOOL)isScreenshot;
-(NSNumber *)persistentidentifier;
-(void)_populateValuesFromQueryItems;
-(void)setPersistentidentifier:(NSNumber *)arg1 ;
-(void)setScreenshot:(BOOL)arg1 ;
@end

