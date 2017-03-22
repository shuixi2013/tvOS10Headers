/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:03 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_CDPDataHarvester.h>

@class NSURL, NSString;

@interface _CDPSerializedDataHarvester : NSObject <_CDPDataHarvester> {

	NSURL* _url;

}

@property (nonatomic,retain) NSURL * url;                           //@synthesize url=_url - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(void)loadWithLimit:(unsigned long long)arg1 dataPointReader:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
@end

