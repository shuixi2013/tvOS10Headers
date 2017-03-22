/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSSearchableIndexServiceInterface.h>

@class CSSearchableIndex, NSString;

@interface CSSearchableIndexXPCProxy : NSObject <CSSearchableIndexServiceInterface> {

	CSSearchableIndex* _index;

}

@property (nonatomic,__weak,readonly) CSSearchableIndex * index;              //@synthesize index=_index - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CSSearchableIndex *)index;
-(void)performIndexJob:(id)arg1 acknowledgementHandler:(/*^block*/id)arg2 ;
-(void)performIndexJob:(id)arg1 ;
-(id)initWithSearchableIndex:(id)arg1 ;
@end
