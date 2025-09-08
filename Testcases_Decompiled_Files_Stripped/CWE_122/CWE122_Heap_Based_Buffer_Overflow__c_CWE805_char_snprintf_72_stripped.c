
void FUN_001030db(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103287(param_1,param_2,param_3);
  return;
}




ulong * FUN_00103369(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103c1d(void)

{
  return;
}




void FUN_00103547(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_00102e96(param_3);
  uVar2 = FUN_00102e96(local_28);
  uVar3 = FUN_00102e96(local_20);
  uVar1 = FUN_0010362d(uVar3,uVar2,uVar1);
  FUN_00103110(&local_30,uVar1);
  return;
}




void FUN_0010334b(undefined8 param_1)

{
  FUN_00103398(param_1);
  return;
}




undefined8 FUN_00102b20(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102f71(param_1,param_2);
  }
  return uVar1;
}




undefined8 FUN_00102e96(undefined8 param_1)

{
  return param_1;
}




void FUN_00102c3c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102b20(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00103922(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101b1a(long *param_1)

{
  FUN_00101e7a(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101a6e(param_1);
  return;
}




void FUN_00101c04(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101f16(param_2);
  *param_1 = *puVar1;
  return;
}




undefined8 FUN_00102e16(undefined8 param_1)

{
  return param_1;
}




void FUN_00101a8e(undefined8 param_1)

{
  FUN_00101ace(param_1);
  return;
}




undefined8 FUN_00101eb4(undefined8 param_1)

{
  return param_1;
}




void FUN_00102de1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030a6(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102d1c(undefined8 param_1)

{
  return param_1;
}




void FUN_00103eb0(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102ee6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103126(param_1,param_2,param_3);
  return;
}




void FUN_00103430(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103521(param_2);
  uVar2 = FUN_00103521(param_1);
  FUN_00103547(uVar2,uVar1,param_3);
  return;
}




void FUN_001036c5(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




long FUN_001028be(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101f16(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101f16(param_2);
  return lVar1 - *plVar2 >> 3;
}




undefined8 FUN_00101f16(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103398(void)

{
  return 0xfffffffffffffff;
}




void FUN_001015d6(undefined8 param_1)

{
  char *__s;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00101684(param_1,2);
  __s = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(__s,100,"%s",local_78);
  FUN_001036c5(__s);
  free(__s);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001027fa(undefined8 param_1)

{
  return param_1;
}




void FUN_0010277b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ccc(param_1,param_2,param_3);
  return;
}




void FUN_00101e6a(void)

{
  return;
}




void FUN_0010381c(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102d6b(undefined8 param_1,undefined8 param_2)

{
  FUN_00103074(param_1,param_2);
  return;
}




void FUN_00103bd0(void)

{
  return;
}




void FUN_00103c33(void)

{
  return;
}




long FUN_00101f7f(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001027fa(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001027fa(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00103771(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void * FUN_001035b5(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




undefined8 FUN_00102f9f(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103088(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103256(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103430(param_1,param_2,param_3);
  return;
}




void FUN_00103c3e(void)

{
  return;
}




long FUN_00103287(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




ulong FUN_00103ab9(long param_1,ulong param_2,long param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8));
    if (iVar1 == 0) break;
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8 + 4));
    if (iVar1 == 0) break;
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001040b4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001033c2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_00102e96(param_3);
  uVar2 = FUN_001034cb(local_28);
  uVar3 = FUN_001034cb(local_20);
  uVar1 = FUN_001034ec(uVar3,uVar2,uVar1);
  FUN_00103110(&local_30,uVar1);
  return;
}




void FUN_00102d2e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d1c(param_3);
  FUN_00103030(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_00102d95(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103088(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101e18(undefined8 param_1)

{
  FUN_0010276c(param_1);
  return;
}




void FUN_00103088(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001027d8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001019e2(void)

{
  FUN_00101845();
  return;
}




undefined8 FUN_00103110(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001038f4(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102bdc(undefined8 param_1,undefined8 param_2)

{
  FUN_00102fec(param_1,param_2);
  return;
}




void FUN_00103e91(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102c06(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bdc(param_1,param_2);
  FUN_00101e38(param_1);
  return;
}




void FUN_00102902(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d95(param_2);
  uVar2 = FUN_00102d95(param_1);
  FUN_00102de1(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103c8b(void)

{
  return;
}




void FUN_00102c96(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102fff(param_1,param_2,param_3);
  return;
}




void FUN_00103c07(void)

{
  return;
}




void FUN_00103521(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103618(&local_10);
  FUN_00102e16(uVar1);
  return;
}




long FUN_00101684(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




undefined8 FUN_00103618(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00102686(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001027d8(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102fec(void)

{
  return;
}




void FUN_00103c75(void)

{
  return;
}




void FUN_001027ad(undefined8 param_1,undefined8 param_2)

{
  FUN_00102cf3(param_1,param_2);
  return;
}




undefined8 FUN_001033b0(undefined8 param_1)

{
  return param_1;
}




void FUN_00102b57(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102f9f(param_2);
  uVar2 = FUN_00102f9f(param_1);
  FUN_00102de1(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103bdb(void)

{
  return;
}




void FUN_00102e28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_00102e96(param_3);
  uVar2 = FUN_00102e96(local_28);
  uVar3 = FUN_00102e96(local_20);
  uVar1 = FUN_001030db(uVar3,uVar2,uVar1);
  FUN_00103110(&local_30,uVar1);
  return;
}




void FUN_0010295a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e16(param_2);
  uVar2 = FUN_00102e16(param_1);
  FUN_00102e28(uVar2,uVar1,param_3);
  return;
}




void FUN_00103c49(void)

{
  return;
}




void FUN_00101a6e(undefined8 param_1)

{
  FUN_00101afa(param_1);
  return;
}




void FUN_00102f1c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010260e(param_1);
  FUN_00103157(uVar1);
  return;
}




undefined8 * FUN_00103480(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  long local_18;
  
  uVar1 = *param_3;
  local_20 = param_1;
  for (local_18 = param_2; local_18 != 0; local_18 = local_18 + -1) {
    *local_20 = uVar1;
    local_20 = local_20 + 1;
  }
  return local_20;
}




undefined8 FUN_00103157(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_0010334b(param_1);
  puVar1 = (undefined8 *)FUN_00103369(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00103074(void)

{
  return;
}




int FUN_00103bb6(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void _FINI_0(void)

{
  if (DAT_00107020 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00101470();
    DAT_00107020 = 1;
    return;
  }
  return;
}




void FUN_001037c6(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101a57(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102cf3(void)

{
  return;
}




void FUN_00101ef4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




ulong FUN_00102a30(undefined8 param_1,ulong param_2,char *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_30;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_2;
  local_40 = param_1;
  lVar1 = FUN_00102f1c(param_1);
  lVar2 = FUN_00102596(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102596(local_40);
  local_30 = FUN_00102596(local_40);
  plVar3 = (long *)FUN_00102f42(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102596(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102f1c(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102f1c(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103be6(void)

{
  return;
}




void FUN_00103206(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001033b0(param_2);
  uVar2 = FUN_001033b0(param_1);
  FUN_001033c2(uVar2,uVar1,param_3);
  return;
}




void FUN_00101aae(undefined8 param_1)

{
  FUN_00101a8e(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c4) */
/* WARNING: Removing unreachable block (ram,0x001014d0) */

void FUN_001014a0(void)

{
  return;
}




void FUN_001038a1(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00103c6a(void)

{
  return;
}




undefined8 FUN_00103df5(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010362d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103662(param_1,param_2,param_3);
  return;
}




void FUN_00103c54(void)

{
  return;
}




void FUN_00102fff(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103206(param_1,param_2,param_3);
  return;
}




void FUN_0010280c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102d1c(param_3);
  uVar2 = FUN_00102d06(param_1);
  FUN_00102d2e(*param_1,uVar2,uVar1);
  return;
}




void FUN_00102ccc(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001032fd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102e96(param_1);
  uVar1 = FUN_00103480(uVar1,param_2,param_3);
  FUN_00103110(&local_10,uVar1);
  return;
}




void FUN_00101845(void)

{
  long in_FS_OFFSET;
  undefined *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101aae(local_58);
  local_68 = (undefined *)0x0;
  local_68 = (undefined *)malloc(100);
  if (local_68 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_68 = 0;
  local_60 = FUN_00101bb4(local_58);
  FUN_00101c04(local_38,&local_60);
                    /* try { // try from 001018d7 to 0010196c has its CatchHandler @ 001019b8 */
  FUN_00101c32(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101bb4(local_58);
  FUN_00101c04(local_38,&local_60);
  FUN_00101c32(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101bb4(local_58);
  FUN_00101c04(local_38,&local_60);
  FUN_00101c32(local_58,local_38[0],1,&local_68);
  FUN_00101cf8(local_38,local_58);
                    /* try { // try from 00101974 to 00101978 has its CatchHandler @ 001019a3 */
  FUN_001015d6(local_38);
  FUN_00101b6c(local_38);
  FUN_00101b6c(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001024e4(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ef4(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103bf1(void)

{
  return;
}




void FUN_00103c12(void)

{
  return;
}




void FUN_00103c5f(void)

{
  return;
}




void FUN_00101fc4(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  ulong local_48;
  long local_40;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = param_2;
  local_80 = param_1;
  if (param_3 != 0) {
    if ((ulong)(param_1[2] - param_1[1] >> 3) < param_3) {
      local_68 = FUN_00102a30(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_001024e4(local_80);
      local_60 = FUN_001028be(&local_88,&local_78);
      local_70 = FUN_00102b20(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101eb4(local_80);
                    /* try { // try from 001022ce to 00102359 has its CatchHandler @ 00102411 */
      FUN_001029fb(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101eb4(local_80);
      puVar2 = (undefined8 *)FUN_00101f16(&local_88);
      local_70 = FUN_00102b57(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101eb4(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101f16(&local_88);
      local_70 = FUN_00102b57(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101eb4(local_80);
      FUN_00101ec6(*local_80,local_80[1],uVar1);
      FUN_00101e7a(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_0010280c(local_38,param_1,param_4);
                    /* try { // try from 0010204e to 00102221 has its CatchHandler @ 001023f3 */
      local_50 = FUN_001028a0(local_38);
      local_78 = FUN_00101bb4(local_80);
      local_48 = FUN_001028be(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101eb4(local_80);
        FUN_00102902(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101f16(&local_88);
        FUN_0010295a(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101f16(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101f16(&local_88);
        FUN_001029aa(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101eb4(local_80);
        lVar4 = FUN_001029fb(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101eb4(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101f16(&local_88);
        FUN_00102902(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101f16(&local_88);
        FUN_001029aa(*puVar2,local_40,local_50);
      }
      FUN_0010286c(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103b98(void)

{
  return 1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ed0)();
  return;
}




void FUN_00102ea8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_0010276c(void)

{
  return;
}




void FUN_00103745(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103c96(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00103847(undefined4 param_1)

{
  long in_FS_OFFSET;
  undefined4 local_18;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  local_18 = param_1;
  printf("%ls\n",&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001025bd(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102baf(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_0010286c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d06(param_1);
  FUN_00102d6b(*param_1,uVar1);
  return;
}




void FUN_00103f70(void)

{
  return;
}




undefined8 FUN_001034cb(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_001027fa(&local_10);
  return *puVar1;
}




void FUN_00103030(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102d1c(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a57(8,param_2);
  *puVar2 = uVar1;
  return;
}




ulong FUN_001039b5(long param_1,ulong param_2,long param_3)

{
  ushort **ppuVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2)] & 0x1000) == 0) break;
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2 + 1)] & 0x1000) == 0) break;
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001040ac,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010260e(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103ba7(void)

{
  return 0;
}




void * FUN_00103662(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_001038c9(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001028a0(undefined8 param_1)

{
  FUN_00102d06(param_1);
  return;
}




long FUN_00102d06(long param_1)

{
  return param_1 + 8;
}




void FUN_00102736(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c96(param_1,param_2,param_3);
  return;
}




void FUN_00102f71(undefined8 param_1,undefined8 param_2)

{
  FUN_001031c0(param_1,param_2,0);
  return;
}




void FUN_001030a6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103256(param_1,param_2,param_3);
  return;
}




void FUN_00102620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c06(param_1,param_3);
                    /* try { // try from 0010265a to 0010265e has its CatchHandler @ 00102661 */
  FUN_00102c3c(param_1,param_2);
  return;
}




void FUN_001031c0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103398(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_00101529(undefined8 param_1)

{
  char *__s;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00101684(param_1,2);
  __s = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(__s,100,"%s",local_78);
  FUN_001036c5(__s);
  free(__s);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001019f2(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001036c5("Calling good()...");
  FUN_001019e2();
  FUN_001036c5("Finished good()");
  FUN_001036c5("Calling bad()...");
  FUN_001016a8();
  FUN_001036c5("Finished bad()");
  return 0;
}




void FUN_001029aa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e96(param_2);
  uVar2 = FUN_00102e96(param_1);
  FUN_00102ea8(uVar2,uVar1,param_3);
  return;
}




void FUN_001037f1(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




long FUN_00102596(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_001016a8(void)

{
  long in_FS_OFFSET;
  undefined *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101aae(local_58);
  local_68 = (undefined *)0x0;
  local_68 = (undefined *)malloc(0x32);
  if (local_68 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_68 = 0;
  local_60 = FUN_00101bb4(local_58);
  FUN_00101c04(local_38,&local_60);
                    /* try { // try from 0010173a to 001017cf has its CatchHandler @ 0010181b */
  FUN_00101c32(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101bb4(local_58);
  FUN_00101c04(local_38,&local_60);
  FUN_00101c32(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101bb4(local_58);
  FUN_00101c04(local_38,&local_60);
  FUN_00101c32(local_58,local_38[0],1,&local_68);
  FUN_00101cf8(local_38,local_58);
                    /* try { // try from 001017d7 to 001017db has its CatchHandler @ 00101806 */
  FUN_00101529(local_38);
  FUN_00101b6c(local_38);
  FUN_00101b6c(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103e18(undefined8 *param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  undefined8 uVar2;
  
  *param_1 = 0;
  __mutex = (pthread_mutex_t *)malloc(0x28);
  if (__mutex == (pthread_mutex_t *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    if (iVar1 == 0) {
      *param_1 = __mutex;
      uVar2 = 1;
    }
    else {
      free(param_1);
      uVar2 = 0;
    }
  }
  return uVar2;
}




void FUN_00103c80(void)

{
  return;
}




void FUN_0010379b(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




bool FUN_00103d9a(pthread_t *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = pthread_join(*param_1,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1 == 0;
}




void FUN_00103955(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101ec6(undefined8 param_1,undefined8 param_2)

{
  FUN_001027ad(param_1,param_2);
  return;
}




undefined8 FUN_00101f28(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001027d8(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102530(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101ef4(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Removing unreachable block (ram,0x00101483) */
/* WARNING: Removing unreachable block (ram,0x0010148f) */

void FUN_00101470(void)

{
  return;
}




void FUN_0010371d(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103126(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032fd(param_1,param_2,param_3);
  return;
}




void FUN_00101b6c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101eb4(param_1);
  FUN_00101ec6(*param_1,param_1[1],uVar1);
  FUN_00101b1a(param_1);
  return;
}




void FUN_00103c28(void)

{
  return;
}




void FUN_00101afa(undefined8 param_1)

{
  FUN_00101e6a(param_1);
  return;
}




void FUN_00101e38(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




undefined8 FUN_00103ccd(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  pthread_t local_20;
  pthread_t *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  local_18 = (pthread_t *)malloc(0x18);
  if (local_18 == (pthread_t *)0x0) {
    uVar2 = 0;
  }
  else {
    local_18[1] = param_1;
    local_18[2] = param_2;
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103c96,local_18);
    if (iVar1 == 0) {
      *local_18 = local_20;
      *param_3 = local_18;
      uVar2 = 1;
    }
    else {
      free(local_18);
      uVar2 = 0;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}




void FUN_00103f00(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _DT_INIT();
  lVar1 = 0;
  do {
    (*(code *)(&__DT_INIT_ARRAY)[lVar1])(param_1,param_2,param_3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}




ulong * FUN_00102f42(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00101cf8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010260e(param_2);
  FUN_001025bd(&local_31,uVar1);
  uVar1 = FUN_00102596(param_2);
                    /* try { // try from 00101d5e to 00101d62 has its CatchHandler @ 00101dcb */
  FUN_00102620(param_1,uVar1,&local_31);
  FUN_00101afa(&local_31);
  uVar2 = FUN_00101eb4(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_001026de(param_2);
  uVar4 = FUN_00102686(param_2);
                    /* try { // try from 00101dac to 00101db0 has its CatchHandler @ 00101de9 */
  uVar1 = FUN_00102736(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103ecf(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101ace(undefined8 param_1)

{
  FUN_00101e18(param_1);
  FUN_00101e38(param_1);
  return;
}




void FUN_001034ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001035b5(param_1,param_2,param_3);
  return;
}




void FUN_00101c32(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_2;
  local_30 = param_1;
  local_20 = FUN_00101f28(param_1);
  local_18 = FUN_00101f7f(&local_38,&local_20);
  local_20 = FUN_001024e4(local_30);
  uVar1 = FUN_00102530(&local_20,local_18);
  FUN_00101fc4(local_30,uVar1,param_3,param_4);
  local_20 = FUN_001024e4(local_30);
  FUN_00102530(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001029fb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ee6(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001026de(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_001027d8(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101bb4(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ef4(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001036eb(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00103bfc(void)

{
  return;
}




void FUN_00101e7a(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_0010277b(param_1,param_2,param_3);
  }
  return;
}




undefined8 FUN_00102baf(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bdc(param_1,param_2);
  return param_1;
}



