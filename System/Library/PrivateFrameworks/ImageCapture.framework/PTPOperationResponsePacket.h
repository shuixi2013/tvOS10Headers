/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:45 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PTPOperationResponsePacket : NSObject {

	int _numParameters;
	unsigned short _responseCode;
	unsigned _transactionID;
	unsigned _parameters[5];

}
-(id)description;
-(unsigned short)responseCode;
-(id)contentForTCP;
-(id)initWithTCPBuffer:(void*)arg1 ;
-(unsigned)parameter1;
-(int)numParameters;
-(unsigned)parameter2;
-(unsigned)parameter3;
-(unsigned)parameter4;
-(unsigned)parameter5;
-(id)initWithUSBBuffer:(void*)arg1 ;
-(id)contentForUSB;
-(id)contentForUSBUsingBuffer:(void*)arg1 capacity:(unsigned)arg2 ;
-(void)setParameter1:(unsigned)arg1 ;
-(void)setParameter2:(unsigned)arg1 ;
-(void)setParameter3:(unsigned)arg1 ;
-(void)setPparameter:(unsigned)arg1 atIndex:(unsigned)arg2 ;
-(void)setParameter4:(unsigned)arg1 ;
-(void)setParameter5:(unsigned)arg1 ;
-(id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned)arg2 numParameters:(unsigned)arg3 parameters:(unsigned*)arg4 ;
-(id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned)arg2 ;
-(id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned)arg2 parameter1:(unsigned)arg3 ;
-(id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned)arg2 parameter1:(unsigned)arg3 parameter2:(unsigned)arg4 ;
-(id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned)arg2 parameter1:(unsigned)arg3 parameter2:(unsigned)arg4 parameter3:(unsigned)arg5 ;
-(id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned)arg2 parameter1:(unsigned)arg3 parameter2:(unsigned)arg4 parameter3:(unsigned)arg5 parameter4:(unsigned)arg6 ;
-(id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned)arg2 parameter1:(unsigned)arg3 parameter2:(unsigned)arg4 parameter3:(unsigned)arg5 parameter4:(unsigned)arg6 parameter5:(unsigned)arg7 ;
-(void)setResponseCode:(unsigned short)arg1 ;
-(void)setTransactionID:(unsigned)arg1 ;
-(unsigned)transactionID;
-(unsigned)parameterAtIndex:(unsigned)arg1 ;
@end

