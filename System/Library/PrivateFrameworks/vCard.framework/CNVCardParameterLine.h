/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:50 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNVCardParameterLine <CNVCardLine>
@required
-(void)addParameterWithName:(id)arg1 value:(id)arg2;
-(void)insertParameterWithName:(id)arg1 value:(id)arg2 atIndex:(unsigned long long)arg3;
-(void)addGroupedLine:(id)arg1 withCounter:(long long*)arg2;
-(BOOL)canSerializeWithStrategy:(id)arg1;
-(void)serializeValueWithStrategy:(id)arg1;

@end
