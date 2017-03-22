/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:03 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GSProtocol
@required
-(void)listAdditionsOfStorage:(long long)arg1 nameSpace:(id)arg2 withOptions:(unsigned long long)arg3 withoutOptions:(unsigned long long)arg4 andEnumerationState:(id)arg5 completionHandler:(/*^block*/id)arg6;
-(void)isPermanentStorageSupportedForHandle:(id)arg1 reply:(/*^block*/id)arg2;
-(void)stagingPrefixForDevice:(int)arg1 volumeUUID:(id)arg2 reply:(/*^block*/id)arg3;
-(oneway void)stagingPrefixRelinquish:(id)arg1;
-(void)permanentStorageOpenForHandle:(id)arg1 withRemoteID:(unsigned long long)arg2 andDocumentID:(id)arg3 reply:(/*^block*/id)arg4;
-(oneway void)permanentStorageClose:(unsigned long long)arg1;
-(void)getAdditionInStorage:(long long)arg1 andNameSpace:(id)arg2 named:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)getAdditionsInStorage:(long long)arg1 andNameSpace:(id)arg2 named:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)setAdditionOptionsInStorage:(long long)arg1 nameSpace:(id)arg2 additionName:(id)arg3 value:(unsigned long long)arg4 reply:(/*^block*/id)arg5;
-(void)removeAdditionsInStorage:(long long)arg1 removalSpec:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)createAdditionInStorage:(long long)arg1 stagedFileDescriptor:(id)arg2 creationInfo:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)mergeAdditionInfoValueInStorage:(long long)arg1 nameSpace:(id)arg2 additionName:(id)arg3 value:(id)arg4 reply:(/*^block*/id)arg5;
-(void)setAdditionDisplayNameInStorage:(long long)arg1 nameSpace:(id)arg2 additionName:(id)arg3 value:(id)arg4 reply:(/*^block*/id)arg5;
-(void)setAdditionNameSpaceInStorage:(long long)arg1 nameSpace:(id)arg2 additionName:(id)arg3 value:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)requestFreeSpace:(unsigned long long)arg1 forVolume:(id)arg2 reply:(/*^block*/id)arg3;
-(void)getFileIdForDocumentId:(unsigned long long)arg1 onDevice:(int)arg2 reply:(/*^block*/id)arg3;
-(void)getDocumentIDForFileHandle:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)setLogLevel:(unsigned)arg1;

@end

