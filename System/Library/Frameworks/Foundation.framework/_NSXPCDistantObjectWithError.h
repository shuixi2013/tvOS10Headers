/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:15 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/_NSXPCDistantObject.h>

@interface _NSXPCDistantObjectWithError : _NSXPCDistantObject {

	/*^block*/id _errorBlock;

}

@property (copy) id errorBlock;              //@synthesize errorBlock=_errorBlock - In the implementation block
-(id)errorBlock;
-(void)setErrorBlock:(id)arg1 ;
-(id)_initWithConnection:(id)arg1 proxyNumber:(unsigned long long)arg2 generationCount:(unsigned long long)arg3 interface:(id)arg4 error:(/*^block*/id)arg5 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
@end

