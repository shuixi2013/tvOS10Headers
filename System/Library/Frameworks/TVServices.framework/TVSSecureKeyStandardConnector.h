/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:57 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVServices/TVSSecureKeyStandardLoaderRequestGenerating.h>
#import <TVServices/TVSSecureKeyStandardLoaderConnectionHandling.h>

@class NSString;

@interface TVSSecureKeyStandardConnector : NSObject <TVSSecureKeyStandardLoaderRequestGenerating, TVSSecureKeyStandardLoaderConnectionHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)secureKeyStandardLoader:(id)arg1 requestForFetchingDataFromURL:(id)arg2 ;
-(void)secureKeyStandardLoader:(id)arg1 sendAsynchronousRequest:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)secureKeyStandardLoader:(id)arg1 requestForPostingData:(id)arg2 toURL:(id)arg3 ;
-(BOOL)isStoreDomainURL:(id)arg1 ;
@end

