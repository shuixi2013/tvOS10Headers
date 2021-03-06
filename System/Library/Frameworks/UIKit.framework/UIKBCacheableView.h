/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:22 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol UIKBCacheableView <NSObject>
@property (nonatomic,readonly) NSString * cacheKey; 
@property (nonatomic,readonly) BOOL cacheDeferable; 
@property (nonatomic,readonly) double cachedWidth; 
@property (nonatomic,readonly) BOOL keepNonPersistent; 
@optional
-(void)drawContentsOfRenderers:(id)arg1;

@required
-(NSString *)cacheKey;
-(double)cachedWidth;
-(id)cacheKeysForRenderFlags:(id)arg1;
-(BOOL)cacheDeferable;
-(BOOL)keepNonPersistent;

@end

