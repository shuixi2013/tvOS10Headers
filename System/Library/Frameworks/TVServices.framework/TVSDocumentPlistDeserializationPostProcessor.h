/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:55 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVServices/TVSDocumentPostprocessor.h>

@class NSString;

@interface TVSDocumentPlistDeserializationPostProcessor : NSObject <TVSDocumentPostprocessor>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)processDocument:(id)arg1 forResponse:(id)arg2 error:(id*)arg3 ;
-(id)postprocessorName;
@end

