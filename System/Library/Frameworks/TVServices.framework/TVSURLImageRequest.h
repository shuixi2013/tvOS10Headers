/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:55 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVSImageDecrypter;
@class NSURL, NSDictionary, NSString;

@interface TVSURLImageRequest : NSObject {

	NSURL* _url;
	NSDictionary* _headers;
	id<TVSImageDecrypter> _decrypter;
	NSString* _identifier;

}

@property (nonatomic,retain) NSURL * url;                                  //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSDictionary * headers;                       //@synthesize headers=_headers - In the implementation block
@property (nonatomic,retain) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) id<TVSImageDecrypter> decrypter;              //@synthesize decrypter=_decrypter - In the implementation block
-(NSString *)identifier;
-(NSURL *)url;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(id)initWithURL:(id)arg1 headers:(id)arg2 identifier:(id)arg3 decrypter:(id)arg4 ;
-(id)initWithURL:(id)arg1 headers:(id)arg2 decrypter:(id)arg3 ;
-(NSDictionary *)headers;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(id<TVSImageDecrypter>)decrypter;
-(void)setDecrypter:(id<TVSImageDecrypter>)arg1 ;
@end

