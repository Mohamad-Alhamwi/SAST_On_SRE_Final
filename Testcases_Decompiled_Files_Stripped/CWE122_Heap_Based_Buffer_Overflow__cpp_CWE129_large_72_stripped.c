
ulong * FUN_001035a7(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void * FUN_001037ef(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void FUN_00103ec5(void)

{
  return;
}




void FUN_001039d5(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103781(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_001030da(param_3);
  uVar2 = FUN_001030da(local_28);
  uVar3 = FUN_001030da(local_20);
  uVar1 = FUN_00103867(uVar3,uVar2,uVar1);
  FUN_0010334e(&local_30,uVar1);
  return;
}




undefined8 FUN_00102f60(undefined8 param_1)

{
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




void FUN_001032b2(void)

{
  return;
}




undefined8 FUN_0010305a(undefined8 param_1)

{
  return param_1;
}




void FUN_00103e2b(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




undefined8 FUN_001020f8(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010215a(undefined8 param_1)

{
  return param_1;
}




void FUN_0010323f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103444(param_1,param_2,param_3);
  return;
}




void FUN_0010205c(undefined8 param_1)

{
  FUN_001029b0(param_1);
  return;
}




undefined8 FUN_00102801(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102df3(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_0010322c(void)

{
  return;
}




void FUN_0010315c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102852(param_1);
  FUN_00103395(uVar1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ed8)();
  return;
}




void FUN_001032e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103494(param_1,param_2,param_3);
  return;
}




void FUN_001038ff(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00103adb(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102e4a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e20(param_1,param_2);
  FUN_0010207c(param_1);
  return;
}




undefined8 FUN_001028ca(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102a1c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103852(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00101d12(undefined8 param_1)

{
  FUN_0010205c(param_1);
  FUN_0010207c(param_1);
  return;
}




undefined8 FUN_00102d64(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_001031b1(param_1,param_2);
  }
  return uVar1;
}




void FUN_00102bee(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001030da(param_2);
  uVar2 = FUN_001030da(param_1);
  FUN_001030ec(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00102774(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 4;
  FUN_00102138(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103de1(void)

{
  return 0;
}




void FUN_001031b1(undefined8 param_1,undefined8 param_2)

{
  FUN_001033fe(param_1,param_2,0);
  return;
}




void FUN_00103e78(void)

{
  return;
}




undefined8 FUN_00103f07(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103ed0,local_18);
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




void FUN_0010297a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102eda(param_1,param_2,param_3);
  return;
}




void FUN_00103b8f(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103a00(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00103395(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0x1fffffffffffffff;
  local_18 = FUN_00103589(param_1);
  puVar1 = (undefined8 *)FUN_001035a7(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




undefined8 FUN_00103705(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102a3e(&local_10);
  return *puVar1;
}




bool FUN_00103fd4(pthread_t *param_1)

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




void FUN_00103726(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001037ef(param_1,param_2,param_3);
  return;
}




void FUN_00103e4c(void)

{
  return;
}




void * FUN_0010389c(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




ulong * FUN_00103182(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




undefined8 FUN_001031df(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001032c6(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102208(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
    if ((ulong)(param_1[2] - param_1[1] >> 2) < param_3) {
      local_68 = FUN_00102c74(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00102728(local_80);
      local_60 = FUN_00102b02(&local_88,&local_78);
      local_70 = FUN_00102d64(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_001020f8(local_80);
                    /* try { // try from 00102512 to 0010259d has its CatchHandler @ 00102655 */
      FUN_00102c3f(local_60 * 4 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_001020f8(local_80);
      puVar2 = (undefined8 *)FUN_0010215a(&local_88);
      local_70 = FUN_00102d9b(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 4;
      uVar1 = FUN_001020f8(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_0010215a(&local_88);
      local_70 = FUN_00102d9b(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_001020f8(local_80);
      FUN_0010210a(*local_80,local_80[1],uVar1);
      FUN_001020be(local_80,*local_80,local_80[2] - *local_80 >> 2);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 4 + local_58;
    }
    else {
      FUN_00102a50(local_38,param_1,param_4);
                    /* try { // try from 00102292 to 00102465 has its CatchHandler @ 00102637 */
      local_50 = FUN_00102ae4(local_38);
      local_78 = FUN_00101df8(local_80);
      local_48 = FUN_00102b02(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_001020f8(local_80);
        FUN_00102b46(param_3 * -4 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 4 + local_80[1];
        lVar4 = param_3 * -4 + local_40;
        puVar2 = (undefined8 *)FUN_0010215a(&local_88);
        FUN_00102b9e(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_0010215a(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_0010215a(&local_88);
        FUN_00102bee(*puVar2,lVar4 + param_3 * 4,local_50);
      }
      else {
        uVar1 = FUN_001020f8(local_80);
        lVar4 = FUN_00102c3f(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_001020f8(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_0010215a(&local_88);
        FUN_00102b46(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 4 + local_80[1];
        puVar2 = (undefined8 *)FUN_0010215a(&local_88);
        FUN_00102bee(*puVar2,local_40,local_50);
      }
      FUN_00102ab0(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010353b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001030da(param_1);
  uVar1 = FUN_001036be(uVar1,param_2,param_3);
  FUN_0010334e(&local_10,uVar1);
  return;
}




void FUN_0010192b(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101cf2(local_58);
  local_64 = 7;
  local_60 = FUN_00101df8(local_58);
  FUN_00101e48(local_38,&local_60);
                    /* try { // try from 0010199b to 00101a30 has its CatchHandler @ 00101a7c */
  FUN_00101e76(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101df8(local_58);
  FUN_00101e48(local_38,&local_60);
  FUN_00101e76(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101df8(local_58);
  FUN_00101e48(local_38,&local_60);
  FUN_00101e76(local_58,local_38[0],1,&local_64);
  FUN_00101f3c(local_38,local_58);
                    /* try { // try from 00101a38 to 00101a3c has its CatchHandler @ 00101a67 */
  FUN_001015dc(local_38);
  FUN_00101db0(local_38);
  FUN_00101db0(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_00102c74(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_0010315c(param_1);
  lVar2 = FUN_001027da(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_001027da(local_40);
  local_30 = FUN_001027da(local_40);
  plVar3 = (long *)FUN_00103182(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_001027da(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_0010315c(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_0010315c(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00101df8(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102138(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001035d6(void)

{
  return 0x1fffffffffffffff;
}




void FUN_00103e20(void)

{
  return;
}




undefined8 FUN_00102fd9(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001032c6(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103025(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032e4(param_1,param_2,param_3);
  return;
}




void FUN_00102e80(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102d64(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 4 + *param_1;
  return;
}




void FUN_001041b0(void)

{
  return;
}




void FUN_0010306c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_001030da(param_3);
  uVar2 = FUN_001030da(local_28);
  uVar3 = FUN_001030da(local_20);
  uVar1 = FUN_00103319(uVar3,uVar2,uVar1);
  FUN_0010334e(&local_30,uVar1);
  return;
}




void FUN_00103eaf(void)

{
  return;
}




void FUN_001039ab(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101d3e(undefined8 param_1)

{
  FUN_001020ae(param_1);
  return;
}




void FUN_00103a2b(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102ae4(undefined8 param_1)

{
  FUN_00102f4a(param_1);
  return;
}




void FUN_001033fe(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001035d6(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 2);
  return;
}




void FUN_00104109(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102c3f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103126(param_1,param_2,param_3);
  return;
}




void FUN_00103867(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010389c(param_1,param_2,param_3);
  return;
}




void FUN_00102f72(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102f60(param_3);
  FUN_00103270(param_1,param_2,uVar1);
  return;
}




void FUN_00103e83(void)

{
  return;
}




void FUN_00103270(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00102f60(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00101c9b(4,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102eda(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010323f(param_1,param_2,param_3);
  return;
}




void FUN_00101aa6(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101cf2(local_58);
  local_64 = 10;
  local_60 = FUN_00101df8(local_58);
  FUN_00101e48(local_38,&local_60);
                    /* try { // try from 00101b16 to 00101bab has its CatchHandler @ 00101bf7 */
  FUN_00101e76(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101df8(local_58);
  FUN_00101e48(local_38,&local_60);
  FUN_00101e76(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101df8(local_58);
  FUN_00101e48(local_38,&local_60);
  FUN_00101e76(local_58,local_38[0],1,&local_64);
  FUN_00101f3c(local_38,local_58);
                    /* try { // try from 00101bb3 to 00101bb7 has its CatchHandler @ 00101be2 */
  FUN_001016af(local_38);
  FUN_00101db0(local_38);
  FUN_00101db0(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010402f(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101f3c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102852(param_2);
  FUN_00102801(&local_31,uVar1);
  uVar1 = FUN_001027da(param_2);
                    /* try { // try from 00101fa2 to 00101fa6 has its CatchHandler @ 0010200f */
  FUN_00102864(param_1,uVar1,&local_31);
  FUN_00101d3e(&local_31);
  uVar2 = FUN_001020f8(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00102922(param_2);
  uVar4 = FUN_001028ca(param_2);
                    /* try { // try from 00101ff0 to 00101ff4 has its CatchHandler @ 0010202d */
  uVar1 = FUN_0010297a(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103319(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034c5(param_1,param_2,param_3);
  return;
}




void FUN_00103925(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00103600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_001030da(param_3);
  uVar2 = FUN_00103705(local_28);
  uVar3 = FUN_00103705(local_20);
  uVar1 = FUN_00103726(uVar3,uVar2,uVar1);
  FUN_0010334e(&local_30,uVar1);
  return;
}




long FUN_001034c5(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -4 + param_3),param_1,lVar1 * 4);
  }
  return param_3 + lVar1 * -4;
}




void FUN_00103e6d(void)

{
  return;
}




void FUN_001017b0(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101cf2(local_58);
  local_64 = 10;
  local_60 = FUN_00101df8(local_58);
  FUN_00101e48(local_38,&local_60);
                    /* try { // try from 00101820 to 001018b5 has its CatchHandler @ 00101901 */
  FUN_00101e76(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101df8(local_58);
  FUN_00101e48(local_38,&local_60);
  FUN_00101e76(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101df8(local_58);
  FUN_00101e48(local_38,&local_60);
  FUN_00101e76(local_58,local_38[0],1,&local_64);
  FUN_00101f3c(local_38,local_58);
                    /* try { // try from 001018bd to 001018c1 has its CatchHandler @ 001018ec */
  FUN_00101509(local_38);
  FUN_00101db0(local_38);
  FUN_00101db0(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101cd2(undefined8 param_1)

{
  FUN_00101d12(param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00108020 == '\0') {
    if (PTR___cxa_finalize_00107fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00108008);
    }
    FUN_00101450();
    DAT_00108020 = 1;
    return;
  }
  return;
}




ulong FUN_00103cf3(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00105100,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101e76(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_0010216c(param_1);
  local_18 = FUN_001021c3(&local_38,&local_20);
  local_20 = FUN_00102728(local_30);
  uVar1 = FUN_00102774(&local_20,local_18);
  FUN_00102208(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00102728(local_30);
  FUN_00102774(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001030ec(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00102864(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102e4a(param_1,param_3);
                    /* try { // try from 0010289e to 001028a2 has its CatchHandler @ 001028a5 */
  FUN_00102e80(param_1,param_2);
  return;
}




long FUN_0010178c(long *param_1,long param_2)

{
  return *param_1 + param_2 * 4;
}




long FUN_00102f4a(long param_1)

{
  return param_1 + 8;
}




void FUN_00103e8e(void)

{
  return;
}




undefined4 * FUN_001036be(undefined4 *param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *local_20;
  long local_10;
  
  uVar1 = *param_3;
  local_20 = param_1;
  for (local_10 = param_2; local_10 != 0; local_10 = local_10 + -1) {
    *local_20 = uVar1;
    local_20 = local_20 + 1;
  }
  return local_20;
}




void FUN_00101cb2(undefined8 param_1)

{
  FUN_00101d3e(param_1);
  return;
}




void FUN_0010207c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00103e0a(void)

{
  return;
}




void FUN_001040ea(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103a56(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00104052(undefined8 *param_1)

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




void FUN_00103444(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001035ee(param_2);
  uVar2 = FUN_001035ee(param_1);
  FUN_00103600(uVar2,uVar1,param_3);
  return;
}




void FUN_00102d9b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001031df(param_2);
  uVar2 = FUN_001031df(param_1);
  FUN_00103025(uVar2,uVar1,param_3,param_4);
  return;
}




undefined8 FUN_001030da(undefined8 param_1)

{
  return param_1;
}




void FUN_0010375b(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103852(&local_10);
  FUN_0010305a(uVar1);
  return;
}




void FUN_00101db0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020f8(param_1);
  FUN_0010210a(*param_1,param_1[1],uVar1);
  FUN_00101d5e(param_1);
  return;
}




void FUN_001029bf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f10(param_1,param_2,param_3);
  return;
}




void FUN_00103e99(void)

{
  return;
}




void FUN_00103eba(void)

{
  return;
}




void FUN_001040cb(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001029b0(void)

{
  return;
}




void FUN_001016af(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int local_18;
  
  piVar2 = (int *)FUN_0010178c(param_1,2);
  iVar1 = *piVar2;
  pvVar3 = operator_new__(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)pvVar3 + (long)local_18 * 4) = 0;
  }
  if ((iVar1 < 0) || (9 < iVar1)) {
    FUN_001038ff("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)pvVar3 + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_00103957(*(undefined4 *)((long)pvVar3 + (long)local_18 * 4));
    }
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  return;
}




void FUN_00103e57(void)

{
  return;
}




void FUN_00101c21(void)

{
  FUN_0010192b();
  FUN_00101aa6();
  return;
}




void FUN_001032c6(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102b9e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010305a(param_2);
  uVar2 = FUN_0010305a(param_1);
  FUN_0010306c(uVar2,uVar1,param_3);
  return;
}




void FUN_00103b5c(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




int FUN_00103df0(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00102a3e(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102df3(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e20(param_1,param_2);
  return param_1;
}




void FUN_00103957(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103494(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010366e(param_1,param_2,param_3);
  return;
}




void FUN_00103e41(void)

{
  return;
}




void FUN_00102a50(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102f60(param_3);
  uVar2 = FUN_00102f4a(param_1);
  FUN_00102f72(*param_1,uVar2,uVar1);
  return;
}




void FUN_00103e62(void)

{
  return;
}




void FUN_00103a81(undefined4 param_1)

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




void FUN_001015dc(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int local_18;
  
  piVar2 = (int *)FUN_0010178c(param_1,2);
  iVar1 = *piVar2;
  pvVar3 = operator_new__(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)pvVar3 + (long)local_18 * 4) = 0;
  }
  if (iVar1 < 0) {
    FUN_001038ff("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)pvVar3 + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_00103957(*(undefined4 *)((long)pvVar3 + (long)local_18 * 4));
    }
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  return;
}




void FUN_00102e20(undefined8 param_1,undefined8 param_2)

{
  FUN_0010322c(param_1,param_2);
  return;
}




void FUN_00103126(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103364(param_1,param_2,param_3);
  return;
}




void FUN_00103e15(void)

{
  return;
}




void FUN_00101509(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int local_18;
  
  piVar2 = (int *)FUN_0010178c(param_1,2);
  iVar1 = *piVar2;
  pvVar3 = operator_new__(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)pvVar3 + (long)local_18 * 4) = 0;
  }
  if (iVar1 < 0) {
    FUN_001038ff("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)pvVar3 + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_00103957(*(undefined4 *)((long)pvVar3 + (long)local_18 * 4));
    }
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  return;
}




void FUN_00102b46(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102fd9(param_2);
  uVar2 = FUN_00102fd9(param_1);
  FUN_00103025(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103364(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010353b(param_1,param_2,param_3);
  return;
}




void FUN_00103589(undefined8 param_1)

{
  FUN_001035d6(param_1);
  return;
}




void FUN_00102ab0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102f4a(param_1);
  FUN_00102faf(*param_1,uVar1);
  return;
}




void FUN_0010366e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010375b(param_2);
  uVar2 = FUN_0010375b(param_1);
  FUN_00103781(uVar2,uVar1,param_3);
  return;
}




void FUN_00101cf2(undefined8 param_1)

{
  FUN_00101cd2(param_1);
  return;
}




void FUN_00101e48(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010215a(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00102f10(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_00103dd2(void)

{
  return 1;
}




undefined8 FUN_00101c36(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001038ff("Calling good()...");
  FUN_00101c21();
  FUN_001038ff("Finished good()");
  FUN_001038ff("Calling bad()...");
  FUN_001017b0();
  FUN_001038ff("Finished bad()");
  return 0;
}




void FUN_00102a1c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00101d5e(long *param_1)

{
  FUN_001020be(param_1,*param_1,param_1[2] - *param_1 >> 2);
  FUN_00101cb2(param_1);
  return;
}




void FUN_00104140(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




ulong FUN_00103bef(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050f8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103e36(void)

{
  return;
}




undefined8 FUN_00102852(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102922(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102a1c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001029f1(undefined8 param_1,undefined8 param_2)

{
  FUN_00102f37(param_1,param_2);
  return;
}




undefined8 FUN_00101c9b(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103b2e(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_001035ee(undefined8 param_1)

{
  return param_1;
}




void FUN_0010210a(undefined8 param_1,undefined8 param_2)

{
  FUN_001029f1(param_1,param_2);
  return;
}




void FUN_00103ed0(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001020be(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_001029bf(param_1,param_2,param_3);
  }
  return;
}




undefined8 FUN_00102728(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102138(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010334e(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




long FUN_001021c3(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102a3e(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102a3e(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_001020ae(void)

{
  return;
}




void FUN_0010397f(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_0010216c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102a1c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102f37(void)

{
  return;
}




long FUN_00102b02(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_0010215a(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_0010215a(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_00102138(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103b03(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103ea4(void)

{
  return;
}




long FUN_001027da(long *param_1)

{
  return param_1[1] - *param_1 >> 2;
}




void FUN_00102faf(undefined8 param_1,undefined8 param_2)

{
  FUN_001032b2(param_1,param_2);
  return;
}



