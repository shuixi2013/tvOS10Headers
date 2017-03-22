/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:57 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISURLOperation.h>

@protocol TVSImageDecrypter;
@class NSURL;

@interface TVSURLImageLoadRequest : ISURLOperation {

	NSURL* _url;
	id<TVSImageDecrypter> _decrypter;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) NSURL * url;                                  //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) id<TVSImageDecrypter> decrypter;              //@synthesize decrypter=_decrypter - In the implementation block
@property (nonatomic,copy) id completionHandler;                           //@synthesize completionHandler=_completionHandler - In the implementation block
-(NSURL *)url;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(id<TVSImageDecrypter>)decrypter;
-(void)setDecrypter:(id<TVSImageDecrypter>)arg1 ;
-(id)initWithURL:(id)arg1 headers:(id)arg2 decrypter:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

