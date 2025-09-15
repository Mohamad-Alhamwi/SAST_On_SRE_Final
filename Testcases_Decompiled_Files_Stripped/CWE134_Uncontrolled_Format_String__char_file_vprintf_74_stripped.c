
void FUN_00104649(void)

{
  return;
}




void FUN_00102292(undefined8 param_1,undefined8 param_2)

{
  FUN_001026f0(param_1,param_2);
  return;
}




undefined8 FUN_0010256b(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00101de6(undefined8 param_1)

{
  FUN_00101ecc(param_1);
  return;
}




void FUN_001020e2(undefined8 param_1)

{
  FUN_0010255c(param_1);
  return;
}




undefined8 FUN_00102754(undefined8 param_1)

{
  return param_1;
}




void FUN_001026b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001026a6(param_2);
  FUN_00102fae(param_1,uVar1);
  return;
}




void FUN_00103eba(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 char *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  undefined *local_c8;
  long local_c0;
  undefined local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = 8;
  local_d4 = 0x30;
  local_d0 = &stack0x00000008;
  local_c8 = local_b8;
  local_b0 = param_10;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  vprintf(param_9,&local_d8);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001046e3(void)

{
  return;
}




void FUN_0010493d(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00104362(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102d78(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102122(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_0010256b(local_28);
    FUN_00102122(param_1,uVar1);
    lVar2 = FUN_00102581(local_28);
    FUN_00102598(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




undefined8 FUN_00102766(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00103040(param_1);
  uVar2 = FUN_00102754(param_4);
  uVar3 = FUN_00102742(param_3);
  uVar4 = FUN_00102730(param_2);
  FUN_0010306c(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00101ecc(undefined8 param_1)

{
  FUN_00102112(param_1);
  return;
}




void FUN_00102112(void)

{
  return;
}




undefined4 FUN_00102210(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00102676(param_1);
  return unaff_EBX;
}




void FUN_001026f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102fe6(param_2);
  uVar1 = FUN_00103004(uVar1);
  FUN_00103016(param_1,uVar1);
  return;
}




void FUN_00103afc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00103b9f(param_2);
  FUN_00103bb2(uVar1,uVar2);
  return;
}




void FUN_0010466a(void)

{
  return;
}




void FUN_00102ccc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001046b7(void)

{
  return;
}




void FUN_00104680(void)

{
  return;
}




undefined8 FUN_001022bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001026a6(param_2);
  FUN_001026b8(param_1,uVar1);
  return param_1;
}




void FUN_001031e4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00103827(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_00104863(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00103004(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103954(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_00102742(undefined8 param_1)

{
  return param_1;
}




void FUN_001025d6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102ebc(param_1);
  uVar2 = FUN_0010218c(param_1);
  FUN_00102ed2(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_00101e66(undefined8 param_1,undefined8 param_2)

{
  FUN_00102056(param_1,param_2);
  return;
}




void FUN_00102102(void)

{
  return;
}




void FUN_00103ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  undefined *local_c8;
  long local_c0;
  undefined local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = 8;
  local_d4 = 0x30;
  local_d0 = &stack0x00000008;
  local_c8 = local_b8;
  local_b0 = param_10;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  vprintf("%s",&local_d8);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101c7e(void)

{
  FUN_0010180f();
  FUN_001019f8();
  return;
}




void FUN_00103980(void)

{
  return;
}




long FUN_00101d4e(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_001033d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103827(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103827(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001043c3(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00104696(void)

{
  return;
}




void FUN_001022f4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00101d0e(void)

{
  return;
}




undefined8 FUN_001024cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010430f(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00104234(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00104675(void)

{
  return;
}




void FUN_0010245c(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102cea(param_1,param_2);
  FUN_00102d64(param_1,param_2);
  FUN_00101d7c(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00104615(void)

{
  return 0;
}




void FUN_0010428a(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001036d5(undefined8 param_1)

{
  FUN_00101d4e(param_1);
  return;
}




undefined8 FUN_00103aea(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001034da(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102b8f(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001034b8(param_1);
  FUN_001034da(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001046cd(void)

{
  return;
}




undefined8
FUN_00102316(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  undefined local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102754(param_5);
  uVar2 = FUN_00102742(param_4);
  uVar3 = FUN_00102730(param_3);
  local_40 = FUN_00102766(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00102392 to 001023d5 has its CatchHandler @ 00102413 */
  uVar1 = FUN_00102b8f(local_40);
  local_38 = FUN_001027e6(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00102598(param_1,local_40);
    FUN_00102ccc(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00102be2(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




undefined8 FUN_0010227f(undefined8 param_1)

{
  return param_1;
}




void FUN_00101eec(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010218c(param_1);
  FUN_00102122(param_1,uVar1);
  FUN_00101de6(param_1);
  return;
}




ulong FUN_00104423(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050b8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001034b8(long param_1)

{
  FUN_001038d2(param_1 + 0x20);
  return;
}




void FUN_00104133(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001038d2(undefined8 param_1)

{
  FUN_00103aea(param_1);
  return;
}




void FUN_00103016(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001026a6(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_00102e3e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102684(param_2);
  uVar2 = FUN_001036f4(param_1);
  FUN_00103706(uVar2,uVar1);
  return;
}




void FUN_00103f89(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00101f2a(param_1,&local_1c);
  local_18 = *puVar1;
  FUN_00103eba(local_18,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103994(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_001034f0(undefined8 param_1,undefined8 param_2)

{
  FUN_00102d3a(param_1,param_2);
  return param_1;
}




void FUN_00103789(undefined8 param_1,undefined8 param_2)

{
  FUN_001039bc(param_1,param_2,0);
  return;
}




undefined8 FUN_00102cea(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001034f0(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




long FUN_00101d21(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_001036b7(undefined8 param_1)

{
  FUN_00101d21(param_1);
  return;
}




void FUN_00102d64(void)

{
  return;
}




void FUN_001039bc(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103b36(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_00103d2a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00103b9f(param_3);
  puVar3 = (undefined8 *)FUN_00101cf8(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_00101d7c(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00101da6(param_1);
  return;
}




undefined8 FUN_00102730(undefined8 param_1)

{
  return param_1;
}




void FUN_00102598(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e3e(param_1,param_2);
  FUN_00102e82(param_1,param_2);
  return;
}




undefined8 FUN_001021ea(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




undefined8 FUN_00101cf8(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102fae(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001026a6(param_2);
  FUN_00103016(param_1,uVar1);
  return;
}




void FUN_00102fe6(undefined8 param_1)

{
  FUN_00103774(param_1);
  return;
}




void FUN_0010388a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103ad7(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103827(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_0010425f(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




ulong FUN_00104527(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050c0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001046d8(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014e3) */
/* WARNING: Removing unreachable block (ram,0x001014ef) */

void FUN_001014d0(void)

{
  return;
}




long FUN_001033c2(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00103a0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102730(param_3);
  uVar1 = FUN_00102742(param_4);
  FUN_00102292(local_38,uVar1);
  FUN_00102754(param_5);
  uVar1 = FUN_00101cf8(0x10,param_2);
                    /* try { // try from 00103a94 to 00103a98 has its CatchHandler @ 00103a9b */
  FUN_00103b4e(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001041df(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001031c6(undefined8 param_1)

{
  FUN_00102b8f(param_1);
  return;
}




undefined4 FUN_00102258(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_001041b3(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102f90(undefined8 param_1)

{
  FUN_00103762(param_1);
  return;
}




long FUN_001031b0(long param_1)

{
  return param_1 + 0x20;
}




void FUN_00101e90(long param_1)

{
  FUN_001020e2(param_1);
  FUN_00102102(param_1);
  FUN_00101d7c(param_1 + 8);
  return;
}




int FUN_00104624(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00103b9f(undefined8 param_1)

{
  return param_1;
}




undefined8
FUN_00102be2(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

{
  char cVar1;
  bool bVar2;
  _Rb_tree_node_base *p_Var3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    p_Var3 = (_Rb_tree_node_base *)FUN_00102ebc(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_001031c6(param_3);
      uVar5 = FUN_00102b8f(param_4);
      cVar1 = FUN_00102258(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00102c66;
      }
    }
  }
  bVar2 = true;
LAB_00102c66:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00102ccc(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_001021a2(undefined8 param_1,undefined8 param_2)

{
  FUN_001025d6(param_1,param_2);
  return;
}




undefined8 * FUN_0010344c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_00103bb2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103040(param_1);
  uVar2 = FUN_00103b9f(param_2);
  FUN_00103c42(param_1,uVar1,uVar2);
  return uVar1;
}




undefined8 FUN_0010473b(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104704,local_18);
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




void FUN_00102d3a(undefined8 param_1,undefined8 param_2)

{
  FUN_0010351e(param_1,param_2);
  return;
}




void FUN_0010465f(void)

{
  return;
}




void FUN_001021cc(undefined8 param_1)

{
  FUN_00102626(param_1);
  return;
}




undefined8 FUN_001026a6(undefined8 param_1)

{
  return param_1;
}




void FUN_001040c4(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00101f2a(param_1,&local_1c);
  local_18 = *puVar1;
  FUN_00103ff8(local_18,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103730(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103994(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103532(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




long FUN_00103548(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_001038f0(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00103954(param_2);
                    /* try { // try from 001035b7 to 00103649 has its CatchHandler @ 00103675 */
    uVar2 = FUN_00103548(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_0010396a(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_001038f0(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00103954(local_38);
      uVar2 = FUN_00103548(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_0010396a(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




undefined8 FUN_0010383a(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102ccc(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103c42(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00101cf8(0x30,param_2);
  uVar1 = FUN_00103b9f(param_3);
  uVar2 = FUN_00102684(param_2);
  uVar3 = FUN_001036f4(param_1);
  FUN_00103cce(uVar3,uVar2,uVar1);
  return;
}




long FUN_00101f2a(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined local_39;
  undefined8 local_38;
  undefined local_30 [8];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = FUN_001021a2(param_1,param_2);
  local_28 = FUN_001021cc(param_1);
  cVar2 = FUN_001021ea(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00102210(param_1);
    uVar3 = FUN_00102236(&local_38);
    cVar2 = FUN_00102258(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101fca;
    }
  }
  bVar1 = true;
LAB_00101fca:
  if (bVar1) {
    uVar3 = FUN_0010227f(param_2);
    FUN_001022bc(local_30,uVar3);
    FUN_001022f4(&local_28,&local_38);
    local_38 = FUN_00102316(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_00102236(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_00102236(undefined8 *param_1)

{
  FUN_00102684(*param_1);
  return;
}




undefined8 FUN_00102626(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102ccc(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001037b7(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00102754(param_5);
  uVar2 = FUN_00102742(param_4);
  uVar3 = FUN_00102730(param_3);
  FUN_00103a0c(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_00101e26(undefined8 param_1)

{
  FUN_00101e06(param_1);
  return;
}




void FUN_00104209(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001046ac(void)

{
  return;
}




void FUN_001046a1(void)

{
  return;
}




void FUN_0010180f(void)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined local_e8 [48];
  undefined4 local_b8 [12];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e26(local_e8);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_88 = 0x7274736465786966;
  local_80 = 0x74736574676e69;
  local_b8[0] = 0;
                    /* try { // try from 001018ef to 00101970 has its CatchHandler @ 001019c8 */
  plVar1 = (long *)FUN_00101f2a(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  local_b8[0] = 1;
  plVar1 = (long *)FUN_00101f2a(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  local_b8[0] = 2;
  plVar1 = (long *)FUN_00101f2a(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  FUN_00101e66(local_b8,local_e8);
                    /* try { // try from 0010197b to 0010197f has its CatchHandler @ 001019b0 */
  FUN_00103f89(local_b8);
  FUN_00101e46(local_b8);
  FUN_00101e46(local_e8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103478(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103827(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




bool FUN_00104808(pthread_t *param_1)

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




undefined8 FUN_00101c93(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00104133("Calling good()...");
  FUN_00101c7e();
  FUN_00104133("Finished good()");
  FUN_00104133("Calling bad()...");
  FUN_00101589();
  FUN_00104133("Finished bad()");
  return 0;
}




void FUN_00103cce(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103b9f(param_3);
  FUN_00103d2a(param_1,param_2,uVar1);
  return;
}




long FUN_00102ebc(long param_1)

{
  return param_1 + 8;
}




void FUN_00104704(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_001036f4(undefined8 param_1)

{
  return param_1;
}




void FUN_00103706(undefined8 param_1,undefined8 param_2)

{
  FUN_00103980(param_1,param_2);
  return;
}




void FUN_00101da6(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




undefined8 FUN_00103774(undefined8 *param_1)

{
  return *param_1;
}




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_001014d0();
    DAT_00109020 = 1;
    return;
  }
  return;
}




void FUN_00104654(void)

{
  return;
}




void FUN_00101e06(undefined8 param_1)

{
  FUN_00101e90(param_1);
  return;
}




void FUN_0010306c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00101cf8(0x30,param_2);
  uVar1 = FUN_00102754(param_5);
  uVar2 = FUN_00102742(param_4);
  uVar3 = FUN_00102730(param_3);
  uVar4 = FUN_00102684(param_2);
  uVar5 = FUN_001036f4(param_1);
                    /* try { // try from 001030fb to 001030ff has its CatchHandler @ 00103102 */
  FUN_001037b7(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_0010218c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010418b(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102ed2(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_40;
  long local_38;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = param_3;
  local_38 = param_2;
  while (local_38 != 0) {
    uVar2 = FUN_00102b8f(local_38);
    cVar1 = FUN_00102258(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_0010256b(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00102581(local_38);
    }
  }
  FUN_00102ccc(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 FUN_0010319a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_001049e0(void)

{
  return;
}




long FUN_001024e2(long param_1)

{
  return param_1 + 0x10;
}




/* WARNING: Removing unreachable block (ram,0x00101524) */
/* WARNING: Removing unreachable block (ram,0x00101530) */

void FUN_00101500(void)

{
  return;
}




void FUN_00102684(long param_1)

{
  FUN_00102f90(param_1 + 0x20);
  return;
}




void FUN_0010491e(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001019f8(void)

{
  size_t sVar1;
  FILE *__stream;
  char *pcVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  undefined local_e8 [48];
  undefined4 local_b8 [12];
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e26(local_e8);
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = '\0';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = '\0';
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = '\0';
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  local_88[0x20] = '\0';
  local_88[0x21] = '\0';
  local_88[0x22] = '\0';
  local_88[0x23] = '\0';
  local_88[0x24] = '\0';
  local_88[0x25] = '\0';
  local_88[0x26] = '\0';
  local_88[0x27] = '\0';
  local_88[0x28] = '\0';
  local_88[0x29] = '\0';
  local_88[0x2a] = '\0';
  local_88[0x2b] = '\0';
  local_88[0x2c] = '\0';
  local_88[0x2d] = '\0';
  local_88[0x2e] = '\0';
  local_88[0x2f] = '\0';
  local_88[0x30] = '\0';
  local_88[0x31] = '\0';
  local_88[0x32] = '\0';
  local_88[0x33] = '\0';
  local_88[0x34] = '\0';
  local_88[0x35] = '\0';
  local_88[0x36] = '\0';
  local_88[0x37] = '\0';
  local_88[0x38] = '\0';
  local_88[0x39] = '\0';
  local_88[0x3a] = '\0';
  local_88[0x3b] = '\0';
  local_88[0x3c] = '\0';
  local_88[0x3d] = '\0';
  local_88[0x3e] = '\0';
  local_88[0x3f] = '\0';
  local_88[0x40] = '\0';
  local_88[0x41] = '\0';
  local_88[0x42] = '\0';
  local_88[0x43] = '\0';
  local_88[0x44] = '\0';
  local_88[0x45] = '\0';
  local_88[0x46] = '\0';
  local_88[0x47] = '\0';
  local_88[0x48] = '\0';
  local_88[0x49] = '\0';
  local_88[0x4a] = '\0';
  local_88[0x4b] = '\0';
  local_88[0x4c] = '\0';
  local_88[0x4d] = '\0';
  local_88[0x4e] = '\0';
  local_88[0x4f] = '\0';
  local_88[0x50] = '\0';
  local_88[0x51] = '\0';
  local_88[0x52] = '\0';
  local_88[0x53] = '\0';
  local_88[0x54] = '\0';
  local_88[0x55] = '\0';
  local_88[0x56] = '\0';
  local_88[0x57] = '\0';
  local_88[0x58] = '\0';
  local_88[0x59] = '\0';
  local_88[0x5a] = '\0';
  local_88[0x5b] = '\0';
  local_88[0x5c] = '\0';
  local_88[0x5d] = '\0';
  local_88[0x5e] = '\0';
  local_88[0x5f] = '\0';
  local_88[0x60] = '\0';
  local_88[0x61] = '\0';
  local_88[0x62] = '\0';
  local_88[99] = '\0';
  sVar1 = strlen(local_88);
  if (1 < 100 - sVar1) {
                    /* try { // try from 00101ad2 to 00101bf6 has its CatchHandler @ 00101c4e */
    __stream = fopen("/tmp/file.txt","r");
    if (__stream != (FILE *)0x0) {
      pcVar2 = fgets(local_88 + sVar1,100 - (int)sVar1,__stream);
      if (pcVar2 == (char *)0x0) {
        FUN_00104133("fgets() failed");
        local_88[sVar1] = '\0';
      }
      fclose(__stream);
    }
  }
  local_b8[0] = 0;
  puVar3 = (undefined8 *)FUN_00101f2a(local_e8,local_b8);
  *puVar3 = local_88;
  local_b8[0] = 1;
  puVar3 = (undefined8 *)FUN_00101f2a(local_e8,local_b8);
  *puVar3 = local_88;
  local_b8[0] = 2;
  puVar3 = (undefined8 *)FUN_00101f2a(local_e8,local_b8);
  *puVar3 = local_88;
  FUN_00101e66(local_b8,local_e8);
                    /* try { // try from 00101c01 to 00101c05 has its CatchHandler @ 00101c36 */
  FUN_001040c4(local_b8);
  FUN_00101e46(local_b8);
  FUN_00101e46(local_e8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101e46(undefined8 param_1)

{
  FUN_00101eec(param_1);
  return;
}




undefined8 FUN_00103224(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  char local_59;
  long local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = FUN_0010218c(param_1);
  local_50 = FUN_00102ebc(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00102b8f(local_58);
    local_59 = FUN_00102258(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_0010256b(local_58);
    }
    else {
      local_58 = FUN_00102581(local_58);
    }
  }
  FUN_00102ccc(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_0010383a(param_1);
    cVar1 = FUN_001021ea(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_0010388a(local_38,&local_58,&local_50);
      goto LAB_001033a6;
    }
    FUN_00103420(&local_48);
  }
  uVar2 = FUN_001031c6(local_48);
  cVar1 = FUN_00102258(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00103478(local_38,&local_48,&local_40);
  }
  else {
    FUN_0010388a(local_38,&local_58,&local_50);
  }
LAB_001033a6:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001046ee(void)

{
  return;
}




void FUN_0010468b(void)

{
  return;
}




void FUN_00102e82(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001036f4(param_1);
  FUN_00103730(uVar1,param_2,1);
  return;
}




void FUN_00103d0b(undefined8 param_1)

{
  FUN_00102fe6(param_1);
  return;
}




undefined8 FUN_00102581(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103b4e(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00103bfe(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104390(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001046c2(void)

{
  return;
}




void FUN_00103040(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001036f4(param_1);
  FUN_00103789(uVar1,1);
  return;
}




void FUN_0010463e(void)

{
  return;
}




void FUN_001042b5(undefined4 param_1)

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




void FUN_00102056(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_0010245c(param_1,param_2);
  lVar1 = FUN_001024cc(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_001024e2(param_1);
                    /* try { // try from 001020b1 to 001020b5 has its CatchHandler @ 001020bb */
    uVar3 = FUN_001024f8(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




undefined8 FUN_00103ad7(undefined8 param_1)

{
  return param_1;
}




void FUN_00104159(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00102d96(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00102ebc(param_1);
  uVar2 = FUN_00103532(param_2);
  uVar1 = FUN_00103548(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_001033c2(param_1);
  uVar2 = FUN_001036b7(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_001031b0(param_1);
  uVar2 = FUN_001036d5(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




undefined8 FUN_00103762(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103b36(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




undefined4 * FUN_001038f0(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001034b8(param_2);
  puVar2 = (undefined4 *)FUN_00103afc(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




undefined8 FUN_00104886(undefined8 *param_1)

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




void FUN_00104970(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00103bfe(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103cb0(param_2);
  puVar2 = (undefined4 *)FUN_00103004(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_00102676(void)

{
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_001027e6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  long local_50;
  long local_48 [5];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = param_2;
  local_60 = param_1;
  lVar3 = FUN_0010314a(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00102ebc(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_001031c6(local_50);
    cVar2 = FUN_00102258(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_001031c6(local_50);
      cVar2 = FUN_00102258(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00103478(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_001031b0(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_001031b0(local_60);
          local_48[1] = 0;
          FUN_001031e4(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_0010344c(local_48);
          uVar6 = FUN_001031c6(*puVar5);
          cVar2 = FUN_00102258(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00103224(local_60,param_3);
          }
          else {
            lVar3 = FUN_0010256b(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_001031e4(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_001033d8(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_001033c2(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_001033c2(local_60);
        uVar6 = FUN_001033c2(local_60);
        FUN_001033d8(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00103420(local_48);
        uVar6 = FUN_001031c6(*puVar5);
        cVar2 = FUN_00102258(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00103224(local_60,param_3);
        }
        else {
          lVar3 = FUN_0010256b(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_001031e4(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_001033d8(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00102b74;
  }
  lVar3 = FUN_0010319a(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00102888:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_001031b0(local_60);
    uVar6 = FUN_001031c6(*puVar5);
    cVar2 = FUN_00102258(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00102888;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_001031b0(local_60);
    local_48[1] = 0;
    FUN_001031e4(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00103224(local_60,param_3);
  }
LAB_00102b74:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00103d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 char *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  undefined *local_c8;
  long local_c0;
  undefined local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = 8;
  local_d4 = 0x30;
  local_d0 = &stack0x00000008;
  local_c8 = local_b8;
  local_b0 = param_10;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  vprintf(param_9,&local_d8);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108eb8)();
  return;
}




undefined8 * FUN_00103420(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_0010314a(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102ccc(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103cb0(undefined8 param_1)

{
  FUN_00103d0b(param_1);
  return;
}




void FUN_0010255c(void)

{
  return;
}




void FUN_00104337(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101589(void)

{
  size_t sVar1;
  FILE *__stream;
  char *pcVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  undefined local_e8 [48];
  undefined4 local_b8 [12];
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e26(local_e8);
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = '\0';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = '\0';
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = '\0';
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  local_88[0x20] = '\0';
  local_88[0x21] = '\0';
  local_88[0x22] = '\0';
  local_88[0x23] = '\0';
  local_88[0x24] = '\0';
  local_88[0x25] = '\0';
  local_88[0x26] = '\0';
  local_88[0x27] = '\0';
  local_88[0x28] = '\0';
  local_88[0x29] = '\0';
  local_88[0x2a] = '\0';
  local_88[0x2b] = '\0';
  local_88[0x2c] = '\0';
  local_88[0x2d] = '\0';
  local_88[0x2e] = '\0';
  local_88[0x2f] = '\0';
  local_88[0x30] = '\0';
  local_88[0x31] = '\0';
  local_88[0x32] = '\0';
  local_88[0x33] = '\0';
  local_88[0x34] = '\0';
  local_88[0x35] = '\0';
  local_88[0x36] = '\0';
  local_88[0x37] = '\0';
  local_88[0x38] = '\0';
  local_88[0x39] = '\0';
  local_88[0x3a] = '\0';
  local_88[0x3b] = '\0';
  local_88[0x3c] = '\0';
  local_88[0x3d] = '\0';
  local_88[0x3e] = '\0';
  local_88[0x3f] = '\0';
  local_88[0x40] = '\0';
  local_88[0x41] = '\0';
  local_88[0x42] = '\0';
  local_88[0x43] = '\0';
  local_88[0x44] = '\0';
  local_88[0x45] = '\0';
  local_88[0x46] = '\0';
  local_88[0x47] = '\0';
  local_88[0x48] = '\0';
  local_88[0x49] = '\0';
  local_88[0x4a] = '\0';
  local_88[0x4b] = '\0';
  local_88[0x4c] = '\0';
  local_88[0x4d] = '\0';
  local_88[0x4e] = '\0';
  local_88[0x4f] = '\0';
  local_88[0x50] = '\0';
  local_88[0x51] = '\0';
  local_88[0x52] = '\0';
  local_88[0x53] = '\0';
  local_88[0x54] = '\0';
  local_88[0x55] = '\0';
  local_88[0x56] = '\0';
  local_88[0x57] = '\0';
  local_88[0x58] = '\0';
  local_88[0x59] = '\0';
  local_88[0x5a] = '\0';
  local_88[0x5b] = '\0';
  local_88[0x5c] = '\0';
  local_88[0x5d] = '\0';
  local_88[0x5e] = '\0';
  local_88[0x5f] = '\0';
  local_88[0x60] = '\0';
  local_88[0x61] = '\0';
  local_88[0x62] = '\0';
  local_88[99] = '\0';
  sVar1 = strlen(local_88);
  if (1 < 100 - sVar1) {
                    /* try { // try from 00101663 to 00101787 has its CatchHandler @ 001017df */
    __stream = fopen("/tmp/file.txt","r");
    if (__stream != (FILE *)0x0) {
      pcVar2 = fgets(local_88 + sVar1,100 - (int)sVar1,__stream);
      if (pcVar2 == (char *)0x0) {
        FUN_00104133("fgets() failed");
        local_88[sVar1] = '\0';
      }
      fclose(__stream);
    }
  }
  local_b8[0] = 0;
  puVar3 = (undefined8 *)FUN_00101f2a(local_e8,local_b8);
  *puVar3 = local_88;
  local_b8[0] = 1;
  puVar3 = (undefined8 *)FUN_00101f2a(local_e8,local_b8);
  *puVar3 = local_88;
  local_b8[0] = 2;
  puVar3 = (undefined8 *)FUN_00101f2a(local_e8,local_b8);
  *puVar3 = local_88;
  FUN_00101e66(local_b8,local_e8);
                    /* try { // try from 00101792 to 00101796 has its CatchHandler @ 001017c7 */
  FUN_00103e4b(local_b8);
  FUN_00101e46(local_b8);
  FUN_00101e46(local_e8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001046f9(void)

{
  return;
}




void FUN_001048ff(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_0010351e(void)

{
  return;
}




undefined8 FUN_00103827(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010396a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001024f8(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102d78(local_18,param_1);
  FUN_00102d96(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00104606(void)

{
  return 1;
}




void FUN_00103e4b(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00101f2a(param_1,&local_1c);
  local_18 = *puVar1;
  FUN_00103d7c(local_18,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



