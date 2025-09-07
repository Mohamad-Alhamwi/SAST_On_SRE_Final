
void FUN_00103151(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032fd(param_1,param_2,param_3);
  return;
}




ulong * FUN_001033df(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103c93(void)

{
  return;
}




void FUN_001035bd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102f0c(param_3);
  uVar2 = FUN_00102f0c(local_28);
  uVar3 = FUN_00102f0c(local_20);
  uVar1 = FUN_001036a3(uVar3,uVar2,uVar1);
  FUN_00103186(&local_30,uVar1);
  return;
}




void FUN_001033c1(undefined8 param_1)

{
  FUN_0010340e(param_1);
  return;
}




undefined8 FUN_00102b96(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102fe7(param_1,param_2);
  }
  return uVar1;
}




undefined8 FUN_00102f0c(undefined8 param_1)

{
  return param_1;
}




void FUN_00102cb2(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102b96(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00103998(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101b90(long *param_1)

{
  FUN_00101ef0(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101ae4(param_1);
  return;
}




void FUN_00101c7a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101f8c(param_2);
  *param_1 = *puVar1;
  return;
}




undefined8 FUN_00102e8c(undefined8 param_1)

{
  return param_1;
}




void FUN_00101b04(undefined8 param_1)

{
  FUN_00101b44(param_1);
  return;
}




undefined8 FUN_00101f2a(undefined8 param_1)

{
  return param_1;
}




void FUN_00102e57(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010311c(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102d92(undefined8 param_1)

{
  return param_1;
}




void FUN_00103f26(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102f5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010319c(param_1,param_2,param_3);
  return;
}




void FUN_001034a6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103597(param_2);
  uVar2 = FUN_00103597(param_1);
  FUN_001035bd(uVar2,uVar1,param_3);
  return;
}




void FUN_0010373b(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




long FUN_00102934(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101f8c(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101f8c(param_2);
  return lVar1 - *plVar2 >> 3;
}




undefined8 FUN_00101f8c(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010340e(void)

{
  return 0xfffffffffffffff;
}




void FUN_00101632(undefined8 param_1)

{
  char *__s;
  undefined8 *puVar1;
  size_t __n;
  long in_FS_OFFSET;
  char local_48 [48];
  ushort local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001016fc(param_1,2);
  __s = (char *)*puVar1;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  local_48[0x10] = '\0';
  local_48[0x11] = '\0';
  local_48[0x12] = '\0';
  local_48[0x13] = '\0';
  local_48[0x14] = '\0';
  local_48[0x15] = '\0';
  local_48[0x16] = '\0';
  local_48[0x17] = '\0';
  local_48[0x18] = '\0';
  local_48[0x19] = '\0';
  local_48[0x1a] = '\0';
  local_48[0x1b] = '\0';
  local_48[0x1c] = '\0';
  local_48[0x1d] = '\0';
  local_48[0x1e] = '\0';
  local_48[0x1f] = '\0';
  local_48[0x20] = '\0';
  local_48[0x21] = '\0';
  local_48[0x22] = '\0';
  local_48[0x23] = '\0';
  local_48[0x24] = '\0';
  local_48[0x25] = '\0';
  local_48[0x26] = '\0';
  local_48[0x27] = '\0';
  local_48[0x28] = '\0';
  local_48[0x29] = '\0';
  local_48[0x2a] = '\0';
  local_48[0x2b] = '\0';
  local_48[0x2c] = '\0';
  local_48[0x2d] = '\0';
  local_48[0x2e] = '\0';
  local_48[0x2f] = '\0';
  local_18 = 0;
  __n = strlen(__s);
  strncat(local_48,__s,__n);
  local_18 = local_18 & 0xff;
  FUN_0010373b(__s);
  if (__s != (char *)0x0) {
    operator_delete__(__s);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102870(undefined8 param_1)

{
  return param_1;
}




void FUN_001027f1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d42(param_1,param_2,param_3);
  return;
}




void FUN_00101ee0(void)

{
  return;
}




void FUN_00103892(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102de1(undefined8 param_1,undefined8 param_2)

{
  FUN_001030ea(param_1,param_2);
  return;
}




void FUN_00103c46(void)

{
  return;
}




void FUN_00103ca9(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101504) */
/* WARNING: Removing unreachable block (ram,0x00101510) */

void FUN_001014e0(void)

{
  return;
}




long FUN_00101ff5(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102870(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102870(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_001037e7(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void * FUN_0010362b(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




undefined8 FUN_00103015(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001030fe(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001032cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034a6(param_1,param_2,param_3);
  return;
}




void FUN_00103cb4(void)

{
  return;
}




long FUN_001032fd(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




ulong FUN_00103b2f(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001040b0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103438(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102f0c(param_3);
  uVar2 = FUN_00103541(local_28);
  uVar3 = FUN_00103541(local_20);
  uVar1 = FUN_00103562(uVar3,uVar2,uVar1);
  FUN_00103186(&local_30,uVar1);
  return;
}




void FUN_00102da4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d92(param_3);
  FUN_001030a6(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_00102e0b(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001030fe(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101e8e(undefined8 param_1)

{
  FUN_001027e2(param_1);
  return;
}




void FUN_001030fe(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010284e(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00101a58(void)

{
  FUN_001018bc();
  return;
}




undefined8 FUN_00103186(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010396a(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102c52(undefined8 param_1,undefined8 param_2)

{
  FUN_00103062(param_1,param_2);
  return;
}




void FUN_00103f07(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102c7c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c52(param_1,param_2);
  FUN_00101eae(param_1);
  return;
}




void FUN_00102978(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e0b(param_2);
  uVar2 = FUN_00102e0b(param_1);
  FUN_00102e57(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103d01(void)

{
  return;
}




void FUN_00102d0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103075(param_1,param_2,param_3);
  return;
}




void FUN_00103c7d(void)

{
  return;
}




void FUN_00103597(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_0010368e(&local_10);
  FUN_00102e8c(uVar1);
  return;
}




long FUN_001016fc(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




undefined8 FUN_0010368e(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_001026fc(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010284e(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103062(void)

{
  return;
}




void FUN_00103ceb(void)

{
  return;
}




void FUN_00102823(undefined8 param_1,undefined8 param_2)

{
  FUN_00102d69(param_1,param_2);
  return;
}




undefined8 FUN_00103426(undefined8 param_1)

{
  return param_1;
}




void FUN_00102bcd(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103015(param_2);
  uVar2 = FUN_00103015(param_1);
  FUN_00102e57(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103c51(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00107020 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_001014b0();
    DAT_00107020 = 1;
    return;
  }
  return;
}




void FUN_00102e9e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102f0c(param_3);
  uVar2 = FUN_00102f0c(local_28);
  uVar3 = FUN_00102f0c(local_20);
  uVar1 = FUN_00103151(uVar3,uVar2,uVar1);
  FUN_00103186(&local_30,uVar1);
  return;
}




void FUN_001029d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e8c(param_2);
  uVar2 = FUN_00102e8c(param_1);
  FUN_00102e9e(uVar2,uVar1,param_3);
  return;
}




void FUN_00103cbf(void)

{
  return;
}




void FUN_00101ae4(undefined8 param_1)

{
  FUN_00101b70(param_1);
  return;
}




void FUN_00102f92(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102684(param_1);
  FUN_001031cd(uVar1);
  return;
}




undefined8 * FUN_001034f6(undefined8 *param_1,long param_2,undefined8 *param_3)

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




undefined8 FUN_001031cd(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_001033c1(param_1);
  puVar1 = (undefined8 *)FUN_001033df(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_001030ea(void)

{
  return;
}




int FUN_00103c2c(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




/* WARNING: Removing unreachable block (ram,0x001014c3) */
/* WARNING: Removing unreachable block (ram,0x001014cf) */

void FUN_001014b0(void)

{
  return;
}




void FUN_0010383c(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101acd(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102d69(void)

{
  return;
}




void FUN_00101f6a(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




ulong FUN_00102aa6(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102f92(param_1);
  lVar2 = FUN_0010260c(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_0010260c(local_40);
  local_30 = FUN_0010260c(local_40);
  plVar3 = (long *)FUN_00102fb8(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_0010260c(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102f92(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102f92(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103c5c(void)

{
  return;
}




void FUN_0010327c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103426(param_2);
  uVar2 = FUN_00103426(param_1);
  FUN_00103438(uVar2,uVar1,param_3);
  return;
}




void FUN_00101b24(undefined8 param_1)

{
  FUN_00101b04(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ec0)();
  return;
}




void FUN_00103917(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00103ce0(void)

{
  return;
}




undefined8 FUN_00103e6b(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001036a3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001036d8(param_1,param_2,param_3);
  return;
}




void FUN_00103cca(void)

{
  return;
}




void FUN_00103075(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010327c(param_1,param_2,param_3);
  return;
}




void FUN_00102882(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102d92(param_3);
  uVar2 = FUN_00102d7c(param_1);
  FUN_00102da4(*param_1,uVar2,uVar1);
  return;
}




void FUN_00102d42(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103373(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102f0c(param_1);
  uVar1 = FUN_001034f6(uVar1,param_2,param_3);
  FUN_00103186(&local_10,uVar1);
  return;
}




void FUN_001018bc(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b24(local_58);
                    /* try { // try from 001018e9 to 001019e2 has its CatchHandler @ 00101a2e */
  local_68 = operator_new__(100);
  memset(local_68,0x41,0x31);
  *(undefined *)((long)local_68 + 0x31) = 0;
  local_60 = FUN_00101c2a(local_58);
  FUN_00101c7a(local_38,&local_60);
  FUN_00101ca8(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101c2a(local_58);
  FUN_00101c7a(local_38,&local_60);
  FUN_00101ca8(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101c2a(local_58);
  FUN_00101c7a(local_38,&local_60);
  FUN_00101ca8(local_58,local_38[0],1,&local_68);
  FUN_00101d6e(local_38,local_58);
                    /* try { // try from 001019ea to 001019ee has its CatchHandler @ 00101a19 */
  FUN_00101632(local_38);
  FUN_00101be2(local_38);
  FUN_00101be2(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010255a(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f6a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103c67(void)

{
  return;
}




void FUN_00103c88(void)

{
  return;
}




void FUN_00103cd5(void)

{
  return;
}




void FUN_0010203a(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102aa6(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_0010255a(local_80);
      local_60 = FUN_00102934(&local_88,&local_78);
      local_70 = FUN_00102b96(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101f2a(local_80);
                    /* try { // try from 00102344 to 001023cf has its CatchHandler @ 00102487 */
      FUN_00102a71(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101f2a(local_80);
      puVar2 = (undefined8 *)FUN_00101f8c(&local_88);
      local_70 = FUN_00102bcd(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101f2a(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101f8c(&local_88);
      local_70 = FUN_00102bcd(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101f2a(local_80);
      FUN_00101f3c(*local_80,local_80[1],uVar1);
      FUN_00101ef0(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_00102882(local_38,param_1,param_4);
                    /* try { // try from 001020c4 to 00102297 has its CatchHandler @ 00102469 */
      local_50 = FUN_00102916(local_38);
      local_78 = FUN_00101c2a(local_80);
      local_48 = FUN_00102934(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101f2a(local_80);
        FUN_00102978(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101f8c(&local_88);
        FUN_001029d0(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101f8c(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101f8c(&local_88);
        FUN_00102a20(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101f2a(local_80);
        lVar4 = FUN_00102a71(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101f2a(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101f8c(&local_88);
        FUN_00102978(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101f8c(&local_88);
        FUN_00102a20(*puVar2,local_40,local_50);
      }
      FUN_001028e2(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103c0e(void)

{
  return 1;
}




void FUN_00102f1e(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_001027e2(void)

{
  return;
}




void FUN_001037bb(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103d0c(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001038bd(undefined4 param_1)

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




undefined8 FUN_00102633(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102c25(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001028e2(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d7c(param_1);
  FUN_00102de1(*param_1,uVar1);
  return;
}




void FUN_00103fe0(void)

{
  return;
}




undefined8 FUN_00103541(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102870(&local_10);
  return *puVar1;
}




void FUN_001030a6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102d92(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101acd(8,param_2);
  *puVar2 = uVar1;
  return;
}




ulong FUN_00103a2b(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001040a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102684(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103c1d(void)

{
  return 0;
}




void * FUN_001036d8(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_0010393f(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102916(undefined8 param_1)

{
  FUN_00102d7c(param_1);
  return;
}




long FUN_00102d7c(long param_1)

{
  return param_1 + 8;
}




void FUN_001027ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d0c(param_1,param_2,param_3);
  return;
}




void FUN_00102fe7(undefined8 param_1,undefined8 param_2)

{
  FUN_00103236(param_1,param_2,0);
  return;
}




void FUN_0010311c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032cc(param_1,param_2,param_3);
  return;
}




void FUN_00102696(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c7c(param_1,param_3);
                    /* try { // try from 001026d0 to 001026d4 has its CatchHandler @ 001026d7 */
  FUN_00102cb2(param_1,param_2);
  return;
}




void FUN_00103236(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010340e(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_00101569(undefined8 param_1)

{
  char *__s;
  undefined8 *puVar1;
  size_t __n;
  long in_FS_OFFSET;
  char local_48 [48];
  ushort local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001016fc(param_1,2);
  __s = (char *)*puVar1;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  local_48[0x10] = '\0';
  local_48[0x11] = '\0';
  local_48[0x12] = '\0';
  local_48[0x13] = '\0';
  local_48[0x14] = '\0';
  local_48[0x15] = '\0';
  local_48[0x16] = '\0';
  local_48[0x17] = '\0';
  local_48[0x18] = '\0';
  local_48[0x19] = '\0';
  local_48[0x1a] = '\0';
  local_48[0x1b] = '\0';
  local_48[0x1c] = '\0';
  local_48[0x1d] = '\0';
  local_48[0x1e] = '\0';
  local_48[0x1f] = '\0';
  local_48[0x20] = '\0';
  local_48[0x21] = '\0';
  local_48[0x22] = '\0';
  local_48[0x23] = '\0';
  local_48[0x24] = '\0';
  local_48[0x25] = '\0';
  local_48[0x26] = '\0';
  local_48[0x27] = '\0';
  local_48[0x28] = '\0';
  local_48[0x29] = '\0';
  local_48[0x2a] = '\0';
  local_48[0x2b] = '\0';
  local_48[0x2c] = '\0';
  local_48[0x2d] = '\0';
  local_48[0x2e] = '\0';
  local_48[0x2f] = '\0';
  local_18 = 0;
  __n = strlen(__s);
  strncat(local_48,__s,__n);
  local_18 = local_18 & 0xff;
  FUN_0010373b(__s);
  if (__s != (char *)0x0) {
    operator_delete__(__s);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101a68(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010373b("Calling good()...");
  FUN_00101a58();
  FUN_0010373b("Finished good()");
  FUN_0010373b("Calling bad()...");
  FUN_00101720();
  FUN_0010373b("Finished bad()");
  return 0;
}




void FUN_00102a20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102f0c(param_2);
  uVar2 = FUN_00102f0c(param_1);
  FUN_00102f1e(uVar2,uVar1,param_3);
  return;
}




void FUN_00103867(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




long FUN_0010260c(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_00101720(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b24(local_58);
                    /* try { // try from 0010174d to 00101846 has its CatchHandler @ 00101892 */
  local_68 = operator_new__(100);
  memset(local_68,0x41,99);
  *(undefined *)((long)local_68 + 99) = 0;
  local_60 = FUN_00101c2a(local_58);
  FUN_00101c7a(local_38,&local_60);
  FUN_00101ca8(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101c2a(local_58);
  FUN_00101c7a(local_38,&local_60);
  FUN_00101ca8(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101c2a(local_58);
  FUN_00101c7a(local_38,&local_60);
  FUN_00101ca8(local_58,local_38[0],1,&local_68);
  FUN_00101d6e(local_38,local_58);
                    /* try { // try from 0010184e to 00101852 has its CatchHandler @ 0010187d */
  FUN_00101569(local_38);
  FUN_00101be2(local_38);
  FUN_00101be2(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103e8e(undefined8 *param_1)

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




void FUN_00103cf6(void)

{
  return;
}




void FUN_00103811(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




bool FUN_00103e10(pthread_t *param_1)

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




void FUN_001039cb(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101f3c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102823(param_1,param_2);
  return;
}




undefined8 FUN_00101f9e(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010284e(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001025a6(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101f6a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103793(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010319c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103373(param_1,param_2,param_3);
  return;
}




void FUN_00101be2(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f2a(param_1);
  FUN_00101f3c(*param_1,param_1[1],uVar1);
  FUN_00101b90(param_1);
  return;
}




void FUN_00103c9e(void)

{
  return;
}




void FUN_00101b70(undefined8 param_1)

{
  FUN_00101ee0(param_1);
  return;
}




void FUN_00101eae(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




undefined8 FUN_00103d43(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103d0c,local_18);
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




void FUN_00103f70(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




ulong * FUN_00102fb8(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00101d6e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102684(param_2);
  FUN_00102633(&local_31,uVar1);
  uVar1 = FUN_0010260c(param_2);
                    /* try { // try from 00101dd4 to 00101dd8 has its CatchHandler @ 00101e41 */
  FUN_00102696(param_1,uVar1,&local_31);
  FUN_00101b70(&local_31);
  uVar2 = FUN_00101f2a(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00102754(param_2);
  uVar4 = FUN_001026fc(param_2);
                    /* try { // try from 00101e22 to 00101e26 has its CatchHandler @ 00101e5f */
  uVar1 = FUN_001027ac(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103f45(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101b44(undefined8 param_1)

{
  FUN_00101e8e(param_1);
  FUN_00101eae(param_1);
  return;
}




void FUN_00103562(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010362b(param_1,param_2,param_3);
  return;
}




void FUN_00101ca8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101f9e(param_1);
  local_18 = FUN_00101ff5(&local_38,&local_20);
  local_20 = FUN_0010255a(local_30);
  uVar1 = FUN_001025a6(&local_20,local_18);
  FUN_0010203a(local_30,uVar1,param_3,param_4);
  local_20 = FUN_0010255a(local_30);
  FUN_001025a6(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102a71(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f5c(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102754(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_0010284e(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101c2a(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f6a(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103761(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00103c72(void)

{
  return;
}




void FUN_00101ef0(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_001027f1(param_1,param_2,param_3);
  }
  return;
}




undefined8 FUN_00102c25(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c52(param_1,param_2);
  return param_1;
}



