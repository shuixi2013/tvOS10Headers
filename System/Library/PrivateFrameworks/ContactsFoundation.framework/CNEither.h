/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:38 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNPair;

@interface CNEither : NSObject {

	CNPair* _pair;

}

@property (nonatomic,retain) CNPair * pair;              //@synthesize pair=_pair - In the implementation block
@property (nonatomic,readonly) id left; 
@property (nonatomic,readonly) id right; 
+(id)eitherWithLeft:(id)arg1 right:(id)arg2 ;
+(id)eitherWithBool:(BOOL)arg1 error:(id)arg2 ;
-(CNPair *)pair;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithLeft:(id)arg1 right:(id)arg2 ;
-(void)setPair:(CNPair *)arg1 ;
-(id)left;
-(id)right;
@end

