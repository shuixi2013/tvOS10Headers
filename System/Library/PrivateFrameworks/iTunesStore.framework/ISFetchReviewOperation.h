/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:50 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class ISReview, NSURL;

@interface ISFetchReviewOperation : ISOperation {

	long long _assetType;
	BOOL _backgroundReview;
	unsigned long long _itemIdentifier;
	unsigned long long _softwareVersionIdentifier;
	ISReview* _review;
	NSURL* _url;

}

@property (retain) ISReview * review;                                         //@synthesize review=_review - In the implementation block
@property (assign) long long assetType;                                       //@synthesize assetType=_assetType - In the implementation block
@property (assign) unsigned long long softwareVersionIdentifier;              //@synthesize softwareVersionIdentifier=_softwareVersionIdentifier - In the implementation block
@property (assign) unsigned long long itemIdentifier;                         //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (retain) NSURL * url;                                               //@synthesize url=_url - In the implementation block
@property (getter=isBackgroundReview) BOOL backgroundReview;                  //@synthesize backgroundReview=_backgroundReview - In the implementation block
-(void)dealloc;
-(NSURL *)url;
-(void)run;
-(void)setUrl:(NSURL *)arg1 ;
-(ISReview *)review;
-(void)setReview:(ISReview *)arg1 ;
-(void)setAssetType:(long long)arg1 ;
-(BOOL)isBackgroundReview;
-(void)setBackgroundReview:(BOOL)arg1 ;
-(void)_fetchReviewInformation;
-(unsigned long long)softwareVersionIdentifier;
-(void)setSoftwareVersionIdentifier:(unsigned long long)arg1 ;
-(long long)assetType;
-(unsigned long long)itemIdentifier;
-(void)setItemIdentifier:(unsigned long long)arg1 ;
@end

