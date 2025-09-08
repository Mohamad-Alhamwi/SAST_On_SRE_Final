
undefined4 FUN_00101e2a(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00102290(param_1);
  return unaff_EBX;
}




int FUN_0010419e(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00104210(void)

{
  return;
}




long FUN_001020fc(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00102dfe(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00103441(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103989(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_24;
  int local_20;
  int local_1c;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 2;
  piVar1 = (int *)FUN_00101b44(param_1,&local_24);
  local_1c = *piVar1;
  local_18 = malloc(0x28);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
    *(undefined4 *)((long)local_18 + (long)local_20 * 4) = 0;
  }
  if (local_1c < 0) {
    FUN_00103cad("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_1c * 4) = 1;
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      FUN_00103d05(*(undefined4 *)((long)local_18 + (long)local_20 * 4));
    }
  }
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010229e(long param_1)

{
  FUN_00102baa(param_1 + 0x20);
  return;
}




undefined8 FUN_001020e6(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00101450();
    DAT_00109020 = 1;
    return;
  }
  return;
}




void FUN_00101aaa(long param_1)

{
  FUN_00101cfc(param_1);
  FUN_00101d1c(param_1);
  FUN_00101996(param_1 + 8);
  return;
}




void FUN_00103dd9(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00104268(void)

{
  return;
}




bool FUN_00104382(pthread_t *param_1)

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




undefined8 FUN_001018ae(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103cad("Calling good()...");
  FUN_00101899();
  FUN_00103cad("Finished good()");
  FUN_00103cad("Calling bad()...");
  FUN_00101509();
  FUN_00103cad("Finished bad()");
  return 0;
}




void FUN_00102a9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010330e(param_1);
  FUN_0010334a(uVar1,param_2,1);
  return;
}




void FUN_00101a60(undefined8 param_1)

{
  FUN_00101b06(param_1);
  return;
}




void FUN_00101a40(undefined8 param_1)

{
  FUN_00101a20(param_1);
  return;
}




void FUN_00103e89(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00103d2d(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103e2f(undefined4 param_1)

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




ulong FUN_00103f9d(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050e4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104273(void)

{
  return;
}




undefined8 FUN_0010356e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_001043dd(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001044b7(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101996(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_001019c0(param_1);
  return;
}




void FUN_0010334a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001035ae(param_1,param_2,param_3);
  return;
}




void FUN_001041b8(void)

{
  return;
}




void FUN_00101b06(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101da6(param_1);
  FUN_00101d3c(param_1,uVar1);
  FUN_00101a00(param_1);
  return;
}




undefined8 FUN_001042b5(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010427e,local_18);
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




void FUN_00104231(void)

{
  return;
}




void FUN_00103cd3(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_0010219b(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103e04(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_0010235c(undefined8 param_1)

{
  return param_1;
}




void FUN_00102112(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102992(local_18,param_1);
  FUN_001029b0(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001037b9(undefined8 param_1)

{
  return param_1;
}




void FUN_00102954(undefined8 param_1,undefined8 param_2)

{
  FUN_00103138(param_1,param_2);
  return;
}




undefined8 FUN_00103584(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00101a00(undefined8 param_1)

{
  FUN_00101ae6(param_1);
  return;
}




void FUN_00102c30(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022c0(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_001038e6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001037b9(param_3);
  FUN_00103942(param_1,param_2,uVar1);
  return;
}




long FUN_00102fdc(long param_1)

{
  return param_1 + 0x18;
}




void FUN_001041c3(void)

{
  return;
}




void FUN_001027a9(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001030d2(param_1);
  FUN_001030f4(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010385a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00101913(0x28,param_2);
  uVar1 = FUN_001037b9(param_3);
  uVar2 = FUN_0010229e(param_2);
  uVar3 = FUN_0010330e(param_1);
  FUN_001038e6(uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_001022c0(undefined8 param_1)

{
  return param_1;
}




void FUN_00101d1c(void)

{
  return;
}




void FUN_001041e4(void)

{
  return;
}




void FUN_00101f0e(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00102ff2(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103441(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103441(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8
FUN_00101f30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_0010236e(param_5);
  uVar2 = FUN_0010235c(param_4);
  uVar3 = FUN_0010234a(param_3);
  local_40 = FUN_00102380(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101fac to 00101fef has its CatchHandler @ 0010202d */
  uVar1 = FUN_001027a9(local_40);
  local_38 = FUN_00102400(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_001021b2(param_1,local_40);
    FUN_001028e6(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_001027fc(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00102baa(undefined8 param_1)

{
  FUN_0010337c(param_1);
  return;
}




undefined8 FUN_00102185(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_001041d9(void)

{
  return;
}




void FUN_001019c0(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00101a20(undefined8 param_1)

{
  FUN_00101aaa(param_1);
  return;
}




void FUN_00101de6(undefined8 param_1)

{
  FUN_00102240(param_1);
  return;
}




undefined8 FUN_00103441(undefined8 param_1)

{
  return param_1;
}




void FUN_00101e50(undefined8 *param_1)

{
  FUN_0010229e(*param_1);
  return;
}




void FUN_00102a58(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010229e(param_2);
  uVar2 = FUN_0010330e(param_1);
  FUN_00103320(uVar2,uVar1);
  return;
}




void FUN_00101769(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a40(local_88);
  local_58[0] = 0;
                    /* try { // try from 001017bd to 00101820 has its CatchHandler @ 0010186c */
  puVar1 = (undefined4 *)FUN_00101b44(local_88,local_58);
  *puVar1 = 10;
  local_58[0] = 1;
  puVar1 = (undefined4 *)FUN_00101b44(local_88,local_58);
  *puVar1 = 10;
  local_58[0] = 2;
  puVar1 = (undefined4 *)FUN_00101b44(local_88,local_58);
  *puVar1 = 10;
  FUN_00101a80(local_58,local_88);
                    /* try { // try from 00101828 to 0010182c has its CatchHandler @ 00101857 */
  FUN_00103b9b(local_58);
  FUN_00101a60(local_58);
  FUN_00101a60(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103320(undefined8 param_1,undefined8 param_2)

{
  FUN_0010359a(param_1,param_2);
  return;
}




undefined8 FUN_0010418f(void)

{
  return 0;
}




void FUN_00103d59(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001041ce(void)

{
  return;
}




void FUN_00104479(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101899(void)

{
  FUN_00101639();
  FUN_00101769();
  return;
}




void FUN_00103138(void)

{
  return;
}




undefined8 FUN_00101913(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




long FUN_00102dca(long param_1)

{
  return param_1 + 0x20;
}




void FUN_00102290(void)

{
  return;
}




void FUN_001022d2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022c0(param_2);
  FUN_00102bc8(param_1,uVar1);
  return;
}




void FUN_001044f0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001038c8(undefined8 param_1)

{
  FUN_00103923(param_1);
  return;
}




void FUN_00101d2c(void)

{
  return;
}




undefined8 FUN_001030f4(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103923(undefined8 param_1)

{
  FUN_00102c00(param_1);
  return;
}




void FUN_0010427e(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00104226(void)

{
  return;
}




void FUN_00102176(void)

{
  return;
}




void FUN_00103f3d(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103818(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001038c8(param_2);
  puVar2 = (undefined4 *)FUN_00102c1e(uVar1);
  *param_1 = *puVar2;
  param_1[1] = 0;
  return;
}




void FUN_00101509(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a40(local_88);
  local_58[0] = 0;
                    /* try { // try from 0010155d to 001015c0 has its CatchHandler @ 0010160c */
  puVar1 = (undefined4 *)FUN_00101b44(local_88,local_58);
  *puVar1 = 10;
  local_58[0] = 1;
  puVar1 = (undefined4 *)FUN_00101b44(local_88,local_58);
  *puVar1 = 10;
  local_58[0] = 2;
  puVar1 = (undefined4 *)FUN_00101b44(local_88,local_58);
  *puVar1 = 10;
  FUN_00101a80(local_58,local_88);
                    /* try { // try from 001015c8 to 001015cc has its CatchHandler @ 001015f7 */
  FUN_00103989(local_58);
  FUN_00101a60(local_58);
  FUN_00101a60(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103454(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001028e6(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102c5a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010330e(param_1);
  FUN_001033a3(uVar1,1);
  return;
}




void FUN_00103626(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010234a(param_3);
  uVar1 = FUN_0010235c(param_4);
  FUN_00101eac(local_38,uVar1);
  FUN_0010236e(param_5);
  uVar1 = FUN_00101913(8,param_2);
                    /* try { // try from 001036ae to 001036b2 has its CatchHandler @ 001036b5 */
  FUN_00103768(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101a80(undefined8 param_1,undefined8 param_2)

{
  FUN_00101c70(param_1,param_2);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ed8)();
  return;
}




undefined8 * FUN_0010303a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




long FUN_00101b44(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00101dbc(param_1,param_2);
  local_28 = FUN_00101de6(param_1);
  cVar2 = FUN_00101e04(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00101e2a(param_1);
    uVar3 = FUN_00101e50(&local_38);
    cVar2 = FUN_00101e72(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101be4;
    }
  }
  bVar1 = true;
LAB_00101be4:
  if (bVar1) {
    uVar3 = FUN_00101e99(param_2);
    FUN_00101ed6(local_30,uVar3);
    FUN_00101f0e(&local_28,&local_38);
    local_38 = FUN_00101f30(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_00101e50(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 4;
}




undefined8 FUN_00104180(void)

{
  return 1;
}




void FUN_001021b2(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a58(param_1,param_2);
  FUN_00102a9c(param_1,param_2);
  return;
}




undefined8 FUN_00101e99(undefined8 param_1)

{
  return param_1;
}




void FUN_00101dbc(undefined8 param_1,undefined8 param_2)

{
  FUN_001021f0(param_1,param_2);
  return;
}




undefined8 FUN_00102c1e(undefined8 param_1)

{
  return param_1;
}




void FUN_00103d05(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00104498(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001028e6(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103edc(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




long FUN_0010193c(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_00104560(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




void FUN_00102c86(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00101913(0x28,param_2);
  uVar1 = FUN_0010236e(param_5);
  uVar2 = FUN_0010235c(param_4);
  uVar3 = FUN_0010234a(param_3);
  uVar4 = FUN_0010229e(param_2);
  uVar5 = FUN_0010330e(param_1);
                    /* try { // try from 00102d15 to 00102d19 has its CatchHandler @ 00102d1c */
  FUN_001033d1(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00101ed6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022c0(param_2);
  FUN_001022d2(param_1,uVar1);
  return param_1;
}




void FUN_001035d6(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103750(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x28);
  return;
}




void FUN_00103f0a(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_0010425d(void)

{
  return;
}




void FUN_001030d2(long param_1)

{
  FUN_001034ec(param_1 + 0x20);
  return;
}




void FUN_00102992(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001032ef(undefined8 param_1)

{
  FUN_00101969(param_1);
  return;
}




void FUN_0010230a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102c00(param_2);
  uVar1 = FUN_00102c1e(uVar1);
  FUN_00102c30(param_1,uVar1);
  return;
}




undefined8 * FUN_00103066(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00101d3c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00102185(local_28);
    FUN_00101d3c(param_1,uVar1);
    lVar2 = FUN_0010219b(local_28);
    FUN_001021b2(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_00101929(void)

{
  return;
}




void FUN_00102076(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102904(param_1,param_2);
  FUN_0010297e(param_1,param_2);
  FUN_00101996(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001034a4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001036f1(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103441(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001033d1(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_0010236e(param_5);
  uVar2 = FUN_0010235c(param_4);
  uVar3 = FUN_0010234a(param_3);
  FUN_00103626(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00102d64(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001028e6(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103d83(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102de0(undefined8 param_1)

{
  FUN_001027a9(param_1);
  return;
}




ulong FUN_001040a1(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050ec,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010423c(void)

{
  return;
}




void FUN_00103092(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103441(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00103b9b(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_24;
  int local_20;
  int local_1c;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 2;
  piVar1 = (int *)FUN_00101b44(param_1,&local_24);
  local_1c = *piVar1;
  local_18 = malloc(0x28);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
    *(undefined4 *)((long)local_18 + (long)local_20 * 4) = 0;
  }
  if ((local_1c < 0) || (9 < local_1c)) {
    FUN_00103cad("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_1c * 4) = 1;
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      FUN_00103d05(*(undefined4 *)((long)local_18 + (long)local_20 * 4));
    }
  }
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103750(void)

{
  return 0x333333333333333;
}




void FUN_00102bc8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022c0(param_2);
  FUN_00102c30(param_1,uVar1);
  return;
}




void FUN_00101ae6(undefined8 param_1)

{
  FUN_00101d2c(param_1);
  return;
}




undefined8 FUN_001037cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102c5a(param_1);
  uVar2 = FUN_001037b9(param_2);
  FUN_0010385a(param_1,uVar1,uVar2);
  return uVar1;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00102400(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00102d64(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00102ad6(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00102de0(local_50);
    cVar2 = FUN_00101e72(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00102de0(local_50);
      cVar2 = FUN_00101e72(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00103092(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102dca(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102dca(local_60);
          local_48[1] = 0;
          FUN_00102dfe(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00103066(local_48);
          uVar6 = FUN_00102de0(*puVar5);
          cVar2 = FUN_00101e72(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00102e3e(local_60,param_3);
          }
          else {
            lVar3 = FUN_00102185(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00102dfe(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00102ff2(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00102fdc(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00102fdc(local_60);
        uVar6 = FUN_00102fdc(local_60);
        FUN_00102ff2(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_0010303a(local_48);
        uVar6 = FUN_00102de0(*puVar5);
        cVar2 = FUN_00101e72(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00102e3e(local_60,param_3);
        }
        else {
          lVar3 = FUN_00102185(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00102dfe(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00102ff2(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_0010278e;
  }
  lVar3 = FUN_00102db4(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_001024a2:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102dca(local_60);
    uVar6 = FUN_00102de0(*puVar5);
    cVar2 = FUN_00101e72(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_001024a2;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102dca(local_60);
    local_48[1] = 0;
    FUN_00102dfe(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00102e3e(local_60,param_3);
  }
LAB_0010278e:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




undefined8 FUN_0010314c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010359a(void)

{
  return;
}




void FUN_0010297e(void)

{
  return;
}




void FUN_00103942(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_001037b9(param_3);
  puVar2 = (undefined8 *)FUN_00101913(8,param_2);
  *puVar2 = *puVar1;
  return;
}




void FUN_001033a3(undefined8 param_1,undefined8 param_2)

{
  FUN_001035d6(param_1,param_2,0);
  return;
}




undefined8 FUN_00103704(undefined8 param_1)

{
  return param_1;
}




void FUN_001021f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102ad6(param_1);
  uVar2 = FUN_00101da6(param_1);
  FUN_00102aec(param_1,uVar2,uVar1,param_2);
  return;
}




undefined8 FUN_00101da6(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00102aec(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_001027a9(local_38);
    cVar1 = FUN_00101e72(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00102185(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_0010219b(local_38);
    }
  }
  FUN_001028e6(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00103a92(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_24;
  int local_20;
  int local_1c;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 2;
  piVar1 = (int *)FUN_00101b44(param_1,&local_24);
  local_1c = *piVar1;
  local_18 = malloc(0x28);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
    *(undefined4 *)((long)local_18 + (long)local_20 * 4) = 0;
  }
  if (local_1c < 0) {
    FUN_00103cad("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_1c * 4) = 1;
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      FUN_00103d05(*(undefined4 *)((long)local_18 + (long)local_20 * 4));
    }
  }
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102c00(undefined8 param_1)

{
  FUN_0010338e(param_1);
  return;
}




undefined8 FUN_0010234a(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001029b0(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00102ad6(param_1);
  uVar2 = FUN_0010314c(param_2);
  uVar1 = FUN_00103162(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00102fdc(param_1);
  uVar2 = FUN_001032d1(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102dca(param_1);
  uVar2 = FUN_001032ef(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_00103eb1(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




long FUN_00101969(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00101cfc(undefined8 param_1)

{
  FUN_00102176(param_1);
  return;
}




void FUN_001034ec(undefined8 param_1)

{
  FUN_00103704(param_1);
  return;
}




void FUN_001041ef(void)

{
  return;
}




undefined8 FUN_001036f1(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101e04(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00104252(void)

{
  return;
}




void FUN_00103768(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00103818(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103cad(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101eac(undefined8 param_1,undefined8 param_2)

{
  FUN_0010230a(param_1,param_2);
  return;
}




undefined8 FUN_00102904(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010310a(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_0010421b(void)

{
  return;
}




undefined4 * FUN_0010350a(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001030d2(param_2);
  puVar2 = (undefined4 *)FUN_00103716(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




undefined8 FUN_0010330e(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010310a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102954(param_1,param_2);
  return param_1;
}




void FUN_00103dae(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8
FUN_001027fc(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_00102ad6(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00102de0(param_3);
      uVar5 = FUN_001027a9(param_4);
      cVar1 = FUN_00101e72(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00102880;
      }
    }
  }
  bVar2 = true;
LAB_00102880:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_001028e6(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_001032d1(undefined8 param_1)

{
  FUN_0010193c(param_1);
  return;
}




long FUN_00102ad6(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_00102380(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102c5a(param_1);
  uVar2 = FUN_0010236e(param_4);
  uVar3 = FUN_0010235c(param_3);
  uVar4 = FUN_0010234a(param_2);
  FUN_00102c86(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




undefined4 FUN_00101e72(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_00104247(void)

{
  return;
}




undefined8 FUN_00104400(undefined8 *param_1)

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




undefined8 FUN_00102e3e(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00101da6(param_1);
  local_50 = FUN_00102ad6(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_001027a9(local_58);
    local_59 = FUN_00101e72(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00102185(local_58);
    }
    else {
      local_58 = FUN_0010219b(local_58);
    }
  }
  FUN_001028e6(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00103454(param_1);
    cVar1 = FUN_00101e04(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_001034a4(local_38,&local_58,&local_50);
      goto LAB_00102fc0;
    }
    FUN_0010303a(&local_48);
  }
  uVar2 = FUN_00102de0(local_48);
  cVar1 = FUN_00101e72(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00103092(local_38,&local_48,&local_40);
  }
  else {
    FUN_001034a4(local_38,&local_58,&local_50);
  }
LAB_00102fc0:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001035ae(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




long FUN_00103162(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_0010350a(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_0010356e(param_2);
                    /* try { // try from 001031d1 to 00103263 has its CatchHandler @ 0010328f */
    uVar2 = FUN_00103162(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00103584(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_0010350a(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_0010356e(local_38);
      uVar2 = FUN_00103162(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00103584(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




undefined8 FUN_0010338e(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00101c70(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00102076(param_1,param_2);
  lVar1 = FUN_001020e6(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_001020fc(param_1);
                    /* try { // try from 00101ccb to 00101ccf has its CatchHandler @ 00101cd5 */
    uVar3 = FUN_00102112(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00104205(void)

{
  return;
}




void FUN_00103716(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_001037b9(param_2);
  FUN_001037cc(uVar1,uVar2);
  return;
}




undefined8 FUN_0010337c(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102240(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001028e6(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




undefined8 FUN_0010236e(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102db4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_001041fa(void)

{
  return;
}




void FUN_00101639(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a40(local_88);
  local_58[0] = 0;
                    /* try { // try from 0010168d to 001016f0 has its CatchHandler @ 0010173c */
  puVar1 = (undefined4 *)FUN_00101b44(local_88,local_58);
  *puVar1 = 7;
  local_58[0] = 1;
  puVar1 = (undefined4 *)FUN_00101b44(local_88,local_58);
  *puVar1 = 7;
  local_58[0] = 2;
  puVar1 = (undefined4 *)FUN_00101b44(local_88,local_58);
  *puVar1 = 7;
  FUN_00101a80(local_58,local_88);
                    /* try { // try from 001016f8 to 001016fc has its CatchHandler @ 00101727 */
  FUN_00103a92(local_58);
  FUN_00101a60(local_58);
  FUN_00101a60(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



