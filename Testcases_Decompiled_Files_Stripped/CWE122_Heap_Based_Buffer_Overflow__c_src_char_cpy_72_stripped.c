
void FUN_00103103(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032af(param_1,param_2,param_3);
  return;
}




ulong * FUN_00103391(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103c45(void)

{
  return;
}




void FUN_0010356f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102ebe(param_3);
  uVar2 = FUN_00102ebe(local_28);
  uVar3 = FUN_00102ebe(local_20);
  uVar1 = FUN_00103655(uVar3,uVar2,uVar1);
  FUN_00103138(&local_30,uVar1);
  return;
}




void FUN_00103373(undefined8 param_1)

{
  FUN_001033c0(param_1);
  return;
}




undefined8 FUN_00102b48(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102f99(param_1,param_2);
  }
  return uVar1;
}




undefined8 FUN_00102ebe(undefined8 param_1)

{
  return param_1;
}




void FUN_00102c64(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102b48(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_0010394a(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101b42(long *param_1)

{
  FUN_00101ea2(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101a96(param_1);
  return;
}




void FUN_00101c2c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101f3e(param_2);
  *param_1 = *puVar1;
  return;
}




undefined8 FUN_00102e3e(undefined8 param_1)

{
  return param_1;
}




void FUN_00101ab6(undefined8 param_1)

{
  FUN_00101af6(param_1);
  return;
}




undefined8 FUN_00101edc(undefined8 param_1)

{
  return param_1;
}




void FUN_00102e09(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030ce(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102d44(undefined8 param_1)

{
  return param_1;
}




void FUN_00103ed8(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102f0e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010314e(param_1,param_2,param_3);
  return;
}




void FUN_00103458(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103549(param_2);
  uVar2 = FUN_00103549(param_1);
  FUN_0010356f(uVar2,uVar1,param_3);
  return;
}




void FUN_001036ed(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




long FUN_001028e6(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101f3e(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101f3e(param_2);
  return lVar1 - *plVar2 >> 3;
}




undefined8 FUN_00101f3e(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001033c0(void)

{
  return 0xfffffffffffffff;
}




void FUN_001015d8(undefined8 param_1)

{
  char *__src;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_48 [56];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00101688(param_1,2);
  __src = (char *)*puVar1;
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
  local_48[0x30] = '\0';
  local_48[0x31] = '\0';
  strcpy(local_48,__src);
  FUN_001036ed(__src);
  free(__src);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102822(undefined8 param_1)

{
  return param_1;
}




void FUN_001027a3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102cf4(param_1,param_2,param_3);
  return;
}




void FUN_00101e92(void)

{
  return;
}




void FUN_00103844(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102d93(undefined8 param_1,undefined8 param_2)

{
  FUN_0010309c(param_1,param_2);
  return;
}




void FUN_00103bf8(void)

{
  return;
}




void FUN_00103c5b(void)

{
  return;
}




long FUN_00101fa7(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102822(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102822(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00103799(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void * FUN_001035dd(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




undefined8 FUN_00102fc7(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001030b0(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010327e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103458(param_1,param_2,param_3);
  return;
}




void FUN_00103c66(void)

{
  return;
}




long FUN_001032af(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




ulong FUN_00103ae1(long param_1,ulong param_2,long param_3)

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




void FUN_001033ea(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102ebe(param_3);
  uVar2 = FUN_001034f3(local_28);
  uVar3 = FUN_001034f3(local_20);
  uVar1 = FUN_00103514(uVar3,uVar2,uVar1);
  FUN_00103138(&local_30,uVar1);
  return;
}




void FUN_00102d56(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d44(param_3);
  FUN_00103058(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_00102dbd(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001030b0(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101e40(undefined8 param_1)

{
  FUN_00102794(param_1);
  return;
}




void FUN_001030b0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102800(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00101a0a(void)

{
  FUN_0010185b();
  return;
}




undefined8 FUN_00103138(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010391c(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102c04(undefined8 param_1,undefined8 param_2)

{
  FUN_00103014(param_1,param_2);
  return;
}




void FUN_00103eb9(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102c2e(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c04(param_1,param_2);
  FUN_00101e60(param_1);
  return;
}




void FUN_0010292a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102dbd(param_2);
  uVar2 = FUN_00102dbd(param_1);
  FUN_00102e09(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103cb3(void)

{
  return;
}




void FUN_00102cbe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103027(param_1,param_2,param_3);
  return;
}




void FUN_00103c2f(void)

{
  return;
}




void FUN_00103549(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103640(&local_10);
  FUN_00102e3e(uVar1);
  return;
}




long FUN_00101688(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




undefined8 FUN_00103640(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_001026ae(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102800(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103014(void)

{
  return;
}




void FUN_00103c9d(void)

{
  return;
}




void FUN_001027d5(undefined8 param_1,undefined8 param_2)

{
  FUN_00102d1b(param_1,param_2);
  return;
}




undefined8 FUN_001033d8(undefined8 param_1)

{
  return param_1;
}




void FUN_00102b7f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102fc7(param_2);
  uVar2 = FUN_00102fc7(param_1);
  FUN_00102e09(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103c03(void)

{
  return;
}




void FUN_00102e50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102ebe(param_3);
  uVar2 = FUN_00102ebe(local_28);
  uVar3 = FUN_00102ebe(local_20);
  uVar1 = FUN_00103103(uVar3,uVar2,uVar1);
  FUN_00103138(&local_30,uVar1);
  return;
}




void FUN_00102982(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e3e(param_2);
  uVar2 = FUN_00102e3e(param_1);
  FUN_00102e50(uVar2,uVar1,param_3);
  return;
}




void FUN_00103c71(void)

{
  return;
}




void FUN_00101a96(undefined8 param_1)

{
  FUN_00101b22(param_1);
  return;
}




void FUN_00102f44(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102636(param_1);
  FUN_0010317f(uVar1);
  return;
}




undefined8 * FUN_001034a8(undefined8 *param_1,long param_2,undefined8 *param_3)

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




undefined8 FUN_0010317f(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_00103373(param_1);
  puVar1 = (undefined8 *)FUN_00103391(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_0010309c(void)

{
  return;
}




int FUN_00103bde(void)

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




void FUN_001037ee(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101a7f(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102d1b(void)

{
  return;
}




void FUN_00101f1c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




ulong FUN_00102a58(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102f44(param_1);
  lVar2 = FUN_001025be(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_001025be(local_40);
  local_30 = FUN_001025be(local_40);
  plVar3 = (long *)FUN_00102f6a(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_001025be(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102f44(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102f44(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103c0e(void)

{
  return;
}




void FUN_0010322e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001033d8(param_2);
  uVar2 = FUN_001033d8(param_1);
  FUN_001033ea(uVar2,uVar1,param_3);
  return;
}




void FUN_00101ad6(undefined8 param_1)

{
  FUN_00101ab6(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c4) */
/* WARNING: Removing unreachable block (ram,0x001014d0) */

void FUN_001014a0(void)

{
  return;
}




void FUN_001038c9(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00103c92(void)

{
  return;
}




undefined8 FUN_00103e1d(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00103655(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010368a(param_1,param_2,param_3);
  return;
}




void FUN_00103c7c(void)

{
  return;
}




void FUN_00103027(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010322e(param_1,param_2,param_3);
  return;
}




void FUN_00102834(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102d44(param_3);
  uVar2 = FUN_00102d2e(param_1);
  FUN_00102d56(*param_1,uVar2,uVar1);
  return;
}




void FUN_00102cf4(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103325(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102ebe(param_1);
  uVar1 = FUN_001034a8(uVar1,param_2,param_3);
  FUN_00103138(&local_10,uVar1);
  return;
}




void FUN_0010185b(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ad6(local_58);
  local_68 = malloc(100);
  if (local_68 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_68,0x41,0x31);
  *(undefined *)((long)local_68 + 0x31) = 0;
  local_60 = FUN_00101bdc(local_58);
  FUN_00101c2c(local_38,&local_60);
                    /* try { // try from 001018ff to 00101994 has its CatchHandler @ 001019e0 */
  FUN_00101c5a(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101bdc(local_58);
  FUN_00101c2c(local_38,&local_60);
  FUN_00101c5a(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101bdc(local_58);
  FUN_00101c2c(local_38,&local_60);
  FUN_00101c5a(local_58,local_38[0],1,&local_68);
  FUN_00101d20(local_38,local_58);
                    /* try { // try from 0010199c to 001019a0 has its CatchHandler @ 001019cb */
  FUN_001015d8(local_38);
  FUN_00101b94(local_38);
  FUN_00101b94(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010250c(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f1c(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103c19(void)

{
  return;
}




void FUN_00103c3a(void)

{
  return;
}




void FUN_00103c87(void)

{
  return;
}




void FUN_00101fec(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102a58(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_0010250c(local_80);
      local_60 = FUN_001028e6(&local_88,&local_78);
      local_70 = FUN_00102b48(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101edc(local_80);
                    /* try { // try from 001022f6 to 00102381 has its CatchHandler @ 00102439 */
      FUN_00102a23(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101edc(local_80);
      puVar2 = (undefined8 *)FUN_00101f3e(&local_88);
      local_70 = FUN_00102b7f(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101edc(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101f3e(&local_88);
      local_70 = FUN_00102b7f(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101edc(local_80);
      FUN_00101eee(*local_80,local_80[1],uVar1);
      FUN_00101ea2(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_00102834(local_38,param_1,param_4);
                    /* try { // try from 00102076 to 00102249 has its CatchHandler @ 0010241b */
      local_50 = FUN_001028c8(local_38);
      local_78 = FUN_00101bdc(local_80);
      local_48 = FUN_001028e6(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101edc(local_80);
        FUN_0010292a(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101f3e(&local_88);
        FUN_00102982(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101f3e(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101f3e(&local_88);
        FUN_001029d2(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101edc(local_80);
        lVar4 = FUN_00102a23(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101edc(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101f3e(&local_88);
        FUN_0010292a(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101f3e(&local_88);
        FUN_001029d2(*puVar2,local_40,local_50);
      }
      FUN_00102894(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103bc0(void)

{
  return 1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ed0)();
  return;
}




void FUN_00102ed0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00102794(void)

{
  return;
}




void FUN_0010376d(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103cbe(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010386f(undefined4 param_1)

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




undefined8 FUN_001025e5(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102bd7(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102894(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d2e(param_1);
  FUN_00102d93(*param_1,uVar1);
  return;
}




void FUN_00103fa0(void)

{
  return;
}




undefined8 FUN_001034f3(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102822(&local_10);
  return *puVar1;
}




void FUN_00103058(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102d44(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a7f(8,param_2);
  *puVar2 = uVar1;
  return;
}




ulong FUN_001039dd(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00102636(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103bcf(void)

{
  return 0;
}




void * FUN_0010368a(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_001038f1(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001028c8(undefined8 param_1)

{
  FUN_00102d2e(param_1);
  return;
}




long FUN_00102d2e(long param_1)

{
  return param_1 + 8;
}




void FUN_0010275e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102cbe(param_1,param_2,param_3);
  return;
}




void FUN_00102f99(undefined8 param_1,undefined8 param_2)

{
  FUN_001031e8(param_1,param_2,0);
  return;
}




void FUN_001030ce(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010327e(param_1,param_2,param_3);
  return;
}




void FUN_00102648(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c2e(param_1,param_3);
                    /* try { // try from 00102682 to 00102686 has its CatchHandler @ 00102689 */
  FUN_00102c64(param_1,param_2);
  return;
}




void FUN_001031e8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001033c0(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_00101529(undefined8 param_1)

{
  char *__src;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_48 [56];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00101688(param_1,2);
  __src = (char *)*puVar1;
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
  local_48[0x30] = '\0';
  local_48[0x31] = '\0';
  strcpy(local_48,__src);
  FUN_001036ed(__src);
  free(__src);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101a1a(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001036ed("Calling good()...");
  FUN_00101a0a();
  FUN_001036ed("Finished good()");
  FUN_001036ed("Calling bad()...");
  FUN_001016ac();
  FUN_001036ed("Finished bad()");
  return 0;
}




void FUN_001029d2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102ebe(param_2);
  uVar2 = FUN_00102ebe(param_1);
  FUN_00102ed0(uVar2,uVar1,param_3);
  return;
}




void FUN_00103819(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




long FUN_001025be(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_001016ac(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ad6(local_58);
  local_68 = malloc(100);
  if (local_68 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_68,0x41,99);
  *(undefined *)((long)local_68 + 99) = 0;
  local_60 = FUN_00101bdc(local_58);
  FUN_00101c2c(local_38,&local_60);
                    /* try { // try from 00101750 to 001017e5 has its CatchHandler @ 00101831 */
  FUN_00101c5a(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101bdc(local_58);
  FUN_00101c2c(local_38,&local_60);
  FUN_00101c5a(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101bdc(local_58);
  FUN_00101c2c(local_38,&local_60);
  FUN_00101c5a(local_58,local_38[0],1,&local_68);
  FUN_00101d20(local_38,local_58);
                    /* try { // try from 001017ed to 001017f1 has its CatchHandler @ 0010181c */
  FUN_00101529(local_38);
  FUN_00101b94(local_38);
  FUN_00101b94(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103e40(undefined8 *param_1)

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




void FUN_00103ca8(void)

{
  return;
}




void FUN_001037c3(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




bool FUN_00103dc2(pthread_t *param_1)

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




void FUN_0010397d(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101eee(undefined8 param_1,undefined8 param_2)

{
  FUN_001027d5(param_1,param_2);
  return;
}




undefined8 FUN_00101f50(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102800(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102558(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101f1c(&local_18,&local_20);
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




void FUN_00103745(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010314e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103325(param_1,param_2,param_3);
  return;
}




void FUN_00101b94(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101edc(param_1);
  FUN_00101eee(*param_1,param_1[1],uVar1);
  FUN_00101b42(param_1);
  return;
}




void FUN_00103c50(void)

{
  return;
}




void FUN_00101b22(undefined8 param_1)

{
  FUN_00101e92(param_1);
  return;
}




void FUN_00101e60(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




undefined8 FUN_00103cf5(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103cbe,local_18);
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




void FUN_00103f30(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




ulong * FUN_00102f6a(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00101d20(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102636(param_2);
  FUN_001025e5(&local_31,uVar1);
  uVar1 = FUN_001025be(param_2);
                    /* try { // try from 00101d86 to 00101d8a has its CatchHandler @ 00101df3 */
  FUN_00102648(param_1,uVar1,&local_31);
  FUN_00101b22(&local_31);
  uVar2 = FUN_00101edc(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00102706(param_2);
  uVar4 = FUN_001026ae(param_2);
                    /* try { // try from 00101dd4 to 00101dd8 has its CatchHandler @ 00101e11 */
  uVar1 = FUN_0010275e(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103ef7(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101af6(undefined8 param_1)

{
  FUN_00101e40(param_1);
  FUN_00101e60(param_1);
  return;
}




void FUN_00103514(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001035dd(param_1,param_2,param_3);
  return;
}




void FUN_00101c5a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101f50(param_1);
  local_18 = FUN_00101fa7(&local_38,&local_20);
  local_20 = FUN_0010250c(local_30);
  uVar1 = FUN_00102558(&local_20,local_18);
  FUN_00101fec(local_30,uVar1,param_3,param_4);
  local_20 = FUN_0010250c(local_30);
  FUN_00102558(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102a23(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f0e(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102706(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102800(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101bdc(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f1c(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103713(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00103c24(void)

{
  return;
}




void FUN_00101ea2(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_001027a3(param_1,param_2,param_3);
  }
  return;
}




undefined8 FUN_00102bd7(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c04(param_1,param_2);
  return param_1;
}



