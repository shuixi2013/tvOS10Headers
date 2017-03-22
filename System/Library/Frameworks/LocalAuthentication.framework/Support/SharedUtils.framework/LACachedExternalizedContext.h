/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:26 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol LAContextExternalizationProt, LAContextExternalizationObserverProt;
@class NSData;

@interface LACachedExternalizedContext : NSObject {

	id<LAContextExternalizationProt> _externalizationDelegate;
	NSData* _cachedExternalizedContext;
	id<LAContextExternalizationObserverProt> _externalizationObserver;

}

@property (nonatomic,readonly) NSData * externalizedContext; 
@property (assign,nonatomic,__weak) id<LAContextExternalizationObserverProt> externalizationObserver;              //@synthesize externalizationObserver=_externalizationObserver - In the implementation block
-(void)externalizedContextWithReply:(/*^block*/id)arg1 ;
-(id)externalizedContextWithError:(id*)arg1 ;
-(id)initWithExternalizationDelegate:(id)arg1 ;
-(NSData *)externalizedContext;
-(id<LAContextExternalizationObserverProt>)externalizationObserver;
-(void)setExternalizationObserver:(id<LAContextExternalizationObserverProt>)arg1 ;
@end

