
void FUN_00102f46(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001031bb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102d54(param_1);
  uVar1 = FUN_0010333e(uVar1,param_2,param_3);
  FUN_00102fce(&local_10,uVar1);
  return;
}




void FUN_00103c6b(void)

{
  return;
}




void FUN_001033aa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103473(param_1,param_2,param_3);
  return;
}




long FUN_00103145(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_001028b9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102da4(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102cd4(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a9a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102eaa(param_1,param_2);
  return;
}




void FUN_001038a1(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010198c(undefined8 param_1)

{
  FUN_00101cd6(param_1);
  FUN_00101cf6(param_1);
  return;
}




void FUN_00101a2a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d72(param_1);
  FUN_00101d84(*param_1,param_1[1],uVar1);
  FUN_001019d8(param_1);
  return;
}




undefined8 FUN_00102c53(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102f46(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101916(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101d28(void)

{
  return;
}




void FUN_00102c29(undefined8 param_1,undefined8 param_2)

{
  FUN_00102f32(param_1,param_2);
  return;
}




void FUN_00102bb1(void)

{
  return;
}




undefined8 FUN_00103d52(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103d1b,local_18);
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




undefined8 FUN_00102d54(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010326e(undefined8 param_1)

{
  return param_1;
}




void FUN_001034eb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103520(param_1,param_2,param_3);
  return;
}




void FUN_0010272a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102bc4(param_1);
  FUN_00102c29(*param_1,uVar1);
  return;
}




void FUN_00101d84(undefined8 param_1,undefined8 param_2)

{
  FUN_0010266b(param_1,param_2);
  return;
}




void FUN_00103209(undefined8 param_1)

{
  FUN_00103256(param_1);
  return;
}




void FUN_0010266b(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bb1(param_1,param_2);
  return;
}




void FUN_001025f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102b54(param_1,param_2,param_3);
  return;
}




void FUN_00101cd6(undefined8 param_1)

{
  FUN_0010262a(param_1);
  return;
}




void FUN_001037ca(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00102bda(undefined8 param_1)

{
  return param_1;
}




ulong FUN_00103a3a(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050ac,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103c81(void)

{
  return;
}




undefined8 FUN_00101dd4(undefined8 param_1)

{
  return param_1;
}




long FUN_00103726(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_001033df(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001034d6(&local_10);
  FUN_00102cd4(uVar1);
  return;
}




ulong * FUN_00102e00(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_0010307e(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103256(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_00103c8c(void)

{
  return;
}




void FUN_001030c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010326e(param_2);
  uVar2 = FUN_0010326e(param_1);
  FUN_00103280(uVar2,uVar1,param_3);
  return;
}




void FUN_0010394e(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00103256(void)

{
  return 0xfffffffffffffff;
}




long FUN_00102bc4(long param_1)

{
  return param_1 + 8;
}




void FUN_00102bec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102bda(param_3);
  FUN_00102eee(param_1,param_2,uVar1);
  return;
}




void FUN_00101af0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101de6(param_1);
  local_18 = FUN_00101e3d(&local_38,&local_20);
  local_20 = FUN_001023a2(local_30);
  uVar1 = FUN_001023ee(&local_20,local_18);
  FUN_00101e82(local_30,uVar1,param_3,param_4);
  local_20 = FUN_001023a2(local_30);
  FUN_001023ee(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102eee(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102bda(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101916(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00103f35(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102639(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102b8a(param_1,param_2,param_3);
  return;
}




void FUN_00101569(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010196c(local_58);
                    /* try { // try from 00101596 to 0010168f has its CatchHandler @ 001016db */
  local_68 = operator_new__(100);
  memset(local_68,0x41,99);
  *(undefined *)((long)local_68 + 99) = 0;
  local_60 = FUN_00101a72(local_58);
  FUN_00101ac2(local_38,&local_60);
  FUN_00101af0(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a72(local_58);
  FUN_00101ac2(local_38,&local_60);
  FUN_00101af0(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a72(local_58);
  FUN_00101ac2(local_38,&local_60);
  FUN_00101af0(local_58,local_38[0],1,&local_68);
  FUN_00101bb6(local_38,local_58);
                    /* try { // try from 00101697 to 0010169b has its CatchHandler @ 001016c6 */
  FUN_00103583(local_38);
  FUN_00101a2a(local_38);
  FUN_00101a2a(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102f64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103114(param_1,param_2,param_3);
  return;
}




void FUN_00103876(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102a15(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e5d(param_2);
  uVar2 = FUN_00102e5d(param_1);
  FUN_00102c9f(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103d1b(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00102a6d(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a9a(param_1,param_2);
  return param_1;
}




void FUN_0010275e(undefined8 param_1)

{
  FUN_00102bc4(param_1);
  return;
}




void FUN_00103cd9(void)

{
  return;
}




void FUN_00102ac4(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a9a(param_1,param_2);
  FUN_00101cf6(param_1);
  return;
}




void FUN_00103c55(void)

{
  return;
}




undefined8 FUN_00103389(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_001026b8(&local_10);
  return *puVar1;
}




/* WARNING: Removing unreachable block (ram,0x001014c3) */
/* WARNING: Removing unreachable block (ram,0x001014cf) */

void FUN_001014b0(void)

{
  return;
}




void FUN_00103405(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102d54(param_3);
  uVar2 = FUN_00102d54(local_28);
  uVar3 = FUN_00102d54(local_20);
  uVar1 = FUN_001034eb(uVar3,uVar2,uVar1);
  FUN_00102fce(&local_30,uVar1);
  return;
}




undefined8 FUN_001024cc(undefined8 param_1)

{
  return param_1;
}




void FUN_00102e2f(undefined8 param_1,undefined8 param_2)

{
  FUN_0010307e(param_1,param_2,0);
  return;
}




void FUN_00103cc3(void)

{
  return;
}




void FUN_0010262a(void)

{
  return;
}




ulong * FUN_00103227(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




ulong FUN_001028ee(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102dda(param_1);
  lVar2 = FUN_00102454(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102454(local_40);
  local_30 = FUN_00102454(local_40);
  plVar3 = (long *)FUN_00102e00(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102454(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102dda(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102dda(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103f54(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




ulong FUN_00103b3e(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050b4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102c9f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f64(param_1,param_2,param_3);
  return;
}




long FUN_0010277c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101dd4(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101dd4(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00103c97(void)

{
  return;
}




undefined8 FUN_001018b1(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010374a("Calling good()...");
  FUN_001018a1();
  FUN_0010374a("Finished good()");
  FUN_0010374a("Calling bad()...");
  FUN_00101569();
  FUN_0010374a("Finished bad()");
  return 0;
}




void FUN_00102d66(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00103280(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102d54(param_3);
  uVar2 = FUN_00103389(local_28);
  uVar3 = FUN_00103389(local_20);
  uVar1 = FUN_001033aa(uVar3,uVar2,uVar1);
  FUN_00102fce(&local_30,uVar1);
  return;
}




undefined8 FUN_00102fce(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102ebd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030c4(param_1,param_2,param_3);
  return;
}




void FUN_001039da(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103770(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001018a1(void)

{
  FUN_00101705();
  return;
}




void FUN_00102b54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ebd(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00101d72(undefined8 param_1)

{
  return param_1;
}




void FUN_00102868(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d54(param_2);
  uVar2 = FUN_00102d54(param_1);
  FUN_00102d66(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00103c1d(void)

{
  return 1;
}




undefined8 FUN_00103015(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_00103209(param_1);
  puVar1 = (undefined8 *)FUN_00103227(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_0010192c(undefined8 param_1)

{
  FUN_001019b8(param_1);
  return;
}




void FUN_00103cb8(void)

{
  return;
}




void FUN_00103820(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103d05(void)

{
  return;
}




void * FUN_00103473(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00103ca2(void)

{
  return;
}




undefined8 FUN_00102e5d(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102f46(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102696(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00102afa(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_001029de(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00103114(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032ee(param_1,param_2,param_3);
  return;
}




void _FINI_0(void)

{
  if (DAT_00108020 == '\0') {
    if (PTR___cxa_finalize_00107fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00108008);
    }
    FUN_001014b0();
    DAT_00108020 = 1;
    return;
  }
  return;
}




void FUN_00103f16(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103f80(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




long FUN_00101e3d(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001026b8(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001026b8(param_2);
  return lVar1 - *plVar2 >> 3;
}




undefined8 FUN_00103c2c(void)

{
  return 0;
}




void FUN_00103c60(void)

{
  return;
}




void FUN_00103cad(void)

{
  return;
}




undefined8 FUN_00101de6(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102696(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103979(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102ce6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102d54(param_3);
  uVar2 = FUN_00102d54(local_28);
  uVar3 = FUN_00102d54(local_20);
  uVar1 = FUN_00102f99(uVar3,uVar2,uVar1);
  FUN_00102fce(&local_30,uVar1);
  return;
}




undefined8 FUN_0010259c(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102696(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103654(undefined8 param_1)

{
  char *__s;
  undefined8 *puVar1;
  size_t __maxlen;
  long in_FS_OFFSET;
  char local_48 [56];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00103726(param_1,2);
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
  local_48[0x30] = '\0';
  local_48[0x31] = '\0';
  __maxlen = strlen(__s);
  snprintf(local_48,__maxlen,"%s",__s);
  FUN_0010374a(__s);
  if (__s != (char *)0x0) {
    operator_delete__(__s);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103ce4(void)

{
  return;
}




void FUN_001037f6(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_001023ee(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101db2(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001026b8(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103e9d(undefined8 *param_1)

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




void FUN_001032ee(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001033df(param_2);
  uVar2 = FUN_001033df(param_1);
  FUN_00103405(uVar2,uVar1,param_3);
  return;
}




void FUN_00102eaa(void)

{
  return;
}




void FUN_00103926(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




long FUN_00102454(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_001039a7(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_001034d6(undefined8 *param_1)

{
  return *param_1;
}




void FUN_0010384b(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001026ca(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102bda(param_3);
  uVar2 = FUN_00102bc4(param_1);
  FUN_00102bec(*param_1,uVar2,uVar1);
  return;
}




void FUN_00102b8a(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_00102544(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102696(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102dda(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001024cc(param_1);
  FUN_00103015(uVar1);
  return;
}




void FUN_00103ff0(void)

{
  return;
}




void FUN_00102f32(void)

{
  return;
}




undefined8 FUN_0010247b(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102a6d(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031bb(param_1,param_2,param_3);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ec0)();
  return;
}




void FUN_00101705(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010196c(local_58);
                    /* try { // try from 00101732 to 0010182b has its CatchHandler @ 00101877 */
  local_68 = operator_new__(100);
  memset(local_68,0x41,0x31);
  *(undefined *)((long)local_68 + 0x31) = 0;
  local_60 = FUN_00101a72(local_58);
  FUN_00101ac2(local_38,&local_60);
  FUN_00101af0(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a72(local_58);
  FUN_00101ac2(local_38,&local_60);
  FUN_00101af0(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a72(local_58);
  FUN_00101ac2(local_38,&local_60);
  FUN_00101af0(local_58,local_38[0],1,&local_68);
  FUN_00101bb6(local_38,local_58);
                    /* try { // try from 00101833 to 00101837 has its CatchHandler @ 00101862 */
  FUN_00103654(local_38);
  FUN_00101a2a(local_38);
  FUN_00101a2a(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001027c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102c53(param_2);
  uVar2 = FUN_00102c53(param_1);
  FUN_00102c9f(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_001037a2(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_001023a2(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101db2(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Removing unreachable block (ram,0x00101504) */
/* WARNING: Removing unreachable block (ram,0x00101510) */

void FUN_001014e0(void)

{
  return;
}




void FUN_00103d10(void)

{
  return;
}




void FUN_00103cce(void)

{
  return;
}




void FUN_0010374a(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00103cfa(void)

{
  return;
}




void FUN_001038cc(undefined4 param_1)

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




void FUN_00101d38(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102639(param_1,param_2,param_3);
  }
  return;
}




void FUN_00101db2(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00101e82(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_001028ee(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_001023a2(local_80);
      local_60 = FUN_0010277c(&local_88,&local_78);
      local_70 = FUN_001029de(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101d72(local_80);
                    /* try { // try from 0010218c to 00102217 has its CatchHandler @ 001022cf */
      FUN_001028b9(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101d72(local_80);
      puVar2 = (undefined8 *)FUN_00101dd4(&local_88);
      local_70 = FUN_00102a15(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101d72(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101dd4(&local_88);
      local_70 = FUN_00102a15(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101d72(local_80);
      FUN_00101d84(*local_80,local_80[1],uVar1);
      FUN_00101d38(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_001026ca(local_38,param_1,param_4);
                    /* try { // try from 00101f0c to 001020df has its CatchHandler @ 001022b1 */
      local_50 = FUN_0010275e(local_38);
      local_78 = FUN_00101a72(local_80);
      local_48 = FUN_0010277c(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101d72(local_80);
        FUN_001027c0(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101dd4(&local_88);
        FUN_00102818(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101dd4(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101dd4(&local_88);
        FUN_00102868(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101d72(local_80);
        lVar4 = FUN_001028b9(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101d72(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101dd4(&local_88);
        FUN_001027c0(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101dd4(&local_88);
        FUN_00102868(*puVar2,local_40,local_50);
      }
      FUN_0010272a(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103583(undefined8 param_1)

{
  char *__s;
  undefined8 *puVar1;
  size_t __maxlen;
  long in_FS_OFFSET;
  char local_48 [56];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00103726(param_1,2);
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
  local_48[0x30] = '\0';
  local_48[0x31] = '\0';
  __maxlen = strlen(__s);
  snprintf(local_48,__maxlen,"%s",__s);
  FUN_0010374a(__s);
  if (__s != (char *)0x0) {
    operator_delete__(__s);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102f99(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103145(param_1,param_2,param_3);
  return;
}




void FUN_001019b8(undefined8 param_1)

{
  FUN_00101d28(param_1);
  return;
}




void FUN_00103c76(void)

{
  return;
}




void FUN_0010196c(undefined8 param_1)

{
  FUN_0010194c(param_1);
  return;
}




void FUN_00101bb6(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001024cc(param_2);
  FUN_0010247b(&local_31,uVar1);
  uVar1 = FUN_00102454(param_2);
                    /* try { // try from 00101c1c to 00101c20 has its CatchHandler @ 00101c89 */
  FUN_001024de(param_1,uVar1,&local_31);
  FUN_001019b8(&local_31);
  uVar2 = FUN_00101d72(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_0010259c(param_2);
  uVar4 = FUN_00102544(param_2);
                    /* try { // try from 00101c6a to 00101c6e has its CatchHandler @ 00101ca7 */
  uVar1 = FUN_001025f4(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103cef(void)

{
  return;
}




undefined8 FUN_00103e7a(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102da4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102fe4(param_1,param_2,param_3);
  return;
}




void FUN_00101ac2(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101dd4(param_2);
  *param_1 = *puVar1;
  return;
}




bool FUN_00103e1f(pthread_t *param_1)

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




void FUN_0010194c(undefined8 param_1)

{
  FUN_0010198c(param_1);
  return;
}




undefined8 * FUN_0010333e(undefined8 *param_1,long param_2,undefined8 *param_3)

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




undefined8 FUN_00101a72(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101db2(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102818(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102cd4(param_2);
  uVar2 = FUN_00102cd4(param_1);
  FUN_00102ce6(uVar2,uVar1,param_3);
  return;
}




void FUN_001024de(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ac4(param_1,param_3);
                    /* try { // try from 00102518 to 0010251c has its CatchHandler @ 0010251f */
  FUN_00102afa(param_1,param_2);
  return;
}




void FUN_001019d8(long *param_1)

{
  FUN_00101d38(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_0010192c(param_1);
  return;
}




void * FUN_00103520(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




int FUN_00103c3b(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101cf6(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




undefined8 FUN_001029de(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102e2f(param_1,param_2);
  }
  return uVar1;
}



