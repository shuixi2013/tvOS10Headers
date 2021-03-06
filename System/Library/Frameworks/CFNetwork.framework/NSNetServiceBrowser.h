/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:04 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@interface NSNetServiceBrowser : NSObject {

	id _netServiceBrowser;
	id _delegate;
	void* _reserved;
	BOOL _includesPeerToPeer;

}

@property (assign) id<NSNetServiceBrowserDelegate> delegate; 
@property (assign) BOOL includesPeerToPeer;                               //@synthesize includesPeerToPeer=_includesPeerToPeer - In the implementation block
-(BOOL)includesPeerToPeer;
-(BOOL)_includesAWDL;
-(void)setIncludesPeerToPeer:(BOOL)arg1 ;
-(void)_setIncludesAWDL:(BOOL)arg1 ;
-(CFNetServiceBrowserRef)_internalNetServiceBrowser;
-(void)searchForBrowsableDomains;
-(void)searchForRegistrationDomains;
-(void)_dispatchCallBack:(void*)arg1 flags:(unsigned long long)arg2 error:(SCD_Struct_NS19)arg3 ;
-(void)searchForAllDomains;
-(void)finalize;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)setDelegate:(id<NSNetServiceBrowserDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<NSNetServiceBrowserDelegate>)delegate;
-(void)stop;
-(void)searchForServicesOfType:(id)arg1 inDomain:(id)arg2 ;
@end

