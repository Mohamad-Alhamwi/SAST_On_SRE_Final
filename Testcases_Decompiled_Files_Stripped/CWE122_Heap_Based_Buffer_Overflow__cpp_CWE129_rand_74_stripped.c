
undefined8 FUN_00101f3d(undefined8 param_1)

{
  return param_1;
}




void FUN_00104254(void)

{
  return;
}




void FUN_001042b7(void)

{
  return;
}




undefined8 FUN_00102229(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00103096(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001034e5(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001034e5(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103d33(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001023ae(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102ca4(param_2);
  uVar1 = FUN_00102cc2(uVar1);
  FUN_00102cd4(param_1,uVar1);
  return;
}




void FUN_0010221a(void)

{
  return;
}




void FUN_001017cb(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ae4(local_88);
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_58[0] = 0;
                    /* try { // try from 00101861 to 001018c4 has its CatchHandler @ 00101910 */
  puVar4 = (uint *)FUN_00101be8(local_88,local_58);
  *puVar4 = uVar1;
  local_58[0] = 1;
  puVar4 = (uint *)FUN_00101be8(local_88,local_58);
  *puVar4 = uVar1;
  local_58[0] = 2;
  puVar4 = (uint *)FUN_00101be8(local_88,local_58);
  *puVar4 = uVar1;
  FUN_00101b24(local_58,local_88);
                    /* try { // try from 001018cc to 001018d0 has its CatchHandler @ 001018fb */
  FUN_00103c2b(local_58);
  FUN_00101b04(local_58);
  FUN_00101b04(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00101be8(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00101e60(param_1,param_2);
  local_28 = FUN_00101e8a(param_1);
  cVar2 = FUN_00101ea8(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00101ece(param_1);
    uVar3 = FUN_00101ef4(&local_38);
    cVar2 = FUN_00101f16(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101c88;
    }
  }
  bVar1 = true;
LAB_00101c88:
  if (bVar1) {
    uVar3 = FUN_00101f3d(param_2);
    FUN_00101f7a(local_30,uVar3);
    FUN_00101fb2(&local_28,&local_38);
    local_38 = FUN_00101fd4(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_00101ef4(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 4;
}




void FUN_00103f0f(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_0010433b(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104304,local_18);
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




void FUN_001044ff(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102c4e(undefined8 param_1)

{
  FUN_00103420(param_1);
  return;
}




long FUN_001019e0(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_00101b8a(undefined8 param_1)

{
  FUN_00101dd0(param_1);
  return;
}




void FUN_00101b4e(long param_1)

{
  FUN_00101da0(param_1);
  FUN_00101dc0(param_1);
  FUN_00101a3a(param_1 + 8);
  return;
}




void FUN_00103f90(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00103e34(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103f62(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00104215(void)

{
  return 0;
}




bool FUN_00104408(pthread_t *param_1)

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




void FUN_00103652(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_0010451e(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101ac4(undefined8 param_1)

{
  FUN_00101b4e(param_1);
  return;
}




void FUN_00103447(undefined8 param_1,undefined8 param_2)

{
  FUN_0010367a(param_1,param_2,0);
  return;
}




void FUN_0010425f(void)

{
  return;
}




void FUN_00101da0(undefined8 param_1)

{
  FUN_0010221a(param_1);
  return;
}




undefined8 FUN_00104486(undefined8 *param_1)

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




void FUN_001042d8(void)

{
  return;
}




void FUN_00103ddf(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_001022e4(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010298a(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103f37(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_001024a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00102e08(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00102b7a(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00102e84(local_50);
    cVar2 = FUN_00101f16(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00102e84(local_50);
      cVar2 = FUN_00101f16(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00103136(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102e6e(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102e6e(local_60);
          local_48[1] = 0;
          FUN_00102ea2(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_0010310a(local_48);
          uVar6 = FUN_00102e84(*puVar5);
          cVar2 = FUN_00101f16(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00102ee2(local_60,param_3);
          }
          else {
            lVar3 = FUN_00102229(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00102ea2(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00103096(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00103080(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00103080(local_60);
        uVar6 = FUN_00103080(local_60);
        FUN_00103096(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_001030de(local_48);
        uVar6 = FUN_00102e84(*puVar5);
        cVar2 = FUN_00101f16(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00102ee2(local_60,param_3);
        }
        else {
          lVar3 = FUN_00102229(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00102ea2(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00103096(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00102832;
  }
  lVar3 = FUN_00102e58(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00102546:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102e6e(local_60);
    uVar6 = FUN_00102e84(*puVar5);
    cVar2 = FUN_00101f16(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00102546;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102e6e(local_60);
    local_48[1] = 0;
    FUN_00102ea2(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00102ee2(local_60,param_3);
  }
LAB_00102832:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ed0)();
  return;
}




undefined8 FUN_0010223f(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001038fe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_001019b7(0x28,param_2);
  uVar1 = FUN_0010385d(param_3);
  uVar2 = FUN_00102342(param_2);
  uVar3 = FUN_001033b2(param_1);
  FUN_0010398a(uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00102a54(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00102b7a(param_1);
  uVar2 = FUN_001031f0(param_2);
  uVar1 = FUN_00103206(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00103080(param_1);
  uVar2 = FUN_00103375(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102e6e(param_1);
  uVar2 = FUN_00103393(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_0010367a(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001037f4(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x28);
  return;
}




void FUN_00101b04(undefined8 param_1)

{
  FUN_00101baa(param_1);
  return;
}




undefined8 FUN_00102e08(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010298a(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103a2d(undefined8 param_1)

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
  piVar1 = (int *)FUN_00101be8(param_1,&local_24);
  local_1c = *piVar1;
  local_18 = operator_new__(0x28);
  for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
    *(undefined4 *)((long)local_18 + (long)local_20 * 4) = 0;
  }
  if (local_1c < 0) {
    FUN_00103d33("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_1c * 4) = 1;
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      FUN_00103d8b(*(undefined4 *)((long)local_18 + (long)local_20 * 4));
    }
  }
  if (local_18 != (void *)0x0) {
    operator_delete__(local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 * FUN_0010310a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_0010426a(void)

{
  return;
}




undefined8 FUN_001029a8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001031ae(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001039c7(undefined8 param_1)

{
  FUN_00102ca4(param_1);
  return;
}




undefined8 FUN_001023ee(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101e4a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010428b(void)

{
  return;
}




undefined8 FUN_0010218a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103136(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001034e5(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




long FUN_001021a0(long param_1)

{
  return param_1 + 0x10;
}




undefined8 FUN_00102cc2(undefined8 param_1)

{
  return param_1;
}




void FUN_00102294(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102b7a(param_1);
  uVar2 = FUN_00101e4a(param_1);
  FUN_00102b90(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_00104280(void)

{
  return;
}




void FUN_00101ae4(undefined8 param_1)

{
  FUN_00101ac4(param_1);
  return;
}




void FUN_00101b24(undefined8 param_1,undefined8 param_2)

{
  FUN_00101d14(param_1,param_2);
  return;
}




void FUN_00101ef4(undefined8 *param_1)

{
  FUN_00102342(*param_1);
  return;
}




void FUN_00103590(undefined8 param_1)

{
  FUN_001037a8(param_1);
  return;
}




void FUN_00101f50(undefined8 param_1,undefined8 param_2)

{
  FUN_001023ae(param_1,param_2);
  return;
}




undefined8 FUN_00102b90(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_0010284d(local_38);
    cVar1 = FUN_00101f16(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00102229(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_0010223f(local_38);
    }
  }
  FUN_0010298a(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 FUN_001019b7(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00103432(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00104249(void)

{
  return;
}




void FUN_00103e5f(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00104275(void)

{
  return;
}




void FUN_00104570(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001019cd(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101483) */
/* WARNING: Removing unreachable block (ram,0x0010148f) */

void FUN_00101470(void)

{
  return;
}




void FUN_00103375(undefined8 param_1)

{
  FUN_001019e0(param_1);
  return;
}




long FUN_00101a0d(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




undefined8 FUN_00102ee2(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00101e4a(param_1);
  local_50 = FUN_00102b7a(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_0010284d(local_58);
    local_59 = FUN_00101f16(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00102229(local_58);
    }
    else {
      local_58 = FUN_0010223f(local_58);
    }
  }
  FUN_0010298a(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_001034f8(param_1);
    cVar1 = FUN_00101ea8(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00103548(local_38,&local_58,&local_50);
      goto LAB_00103064;
    }
    FUN_001030de(&local_48);
  }
  uVar2 = FUN_00102e84(local_48);
  cVar1 = FUN_00101f16(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00103136(local_38,&local_48,&local_40);
  }
  else {
    FUN_00103548(local_38,&local_58,&local_50);
  }
LAB_00103064:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102376(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102364(param_2);
  FUN_00102c6c(param_1,uVar1);
  return;
}




undefined8 FUN_00102400(undefined8 param_1)

{
  return param_1;
}




void FUN_001039e6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_0010385d(param_3);
  puVar2 = (undefined8 *)FUN_001019b7(8,param_2);
  *puVar2 = *puVar1;
  return;
}




void FUN_00101e60(undefined8 param_1,undefined8 param_2)

{
  FUN_00102294(param_1,param_2);
  return;
}




undefined8 FUN_001031f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103b2c(undefined8 param_1)

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
  piVar1 = (int *)FUN_00101be8(param_1,&local_24);
  local_1c = *piVar1;
  local_18 = operator_new__(0x28);
  for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
    *(undefined4 *)((long)local_18 + (long)local_20 * 4) = 0;
  }
  if (local_1c < 0) {
    FUN_00103d33("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_1c * 4) = 1;
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      FUN_00103d8b(*(undefined4 *)((long)local_18 + (long)local_20 * 4));
    }
  }
  if (local_18 != (void *)0x0) {
    operator_delete__(local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00104463(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001042cd(void)

{
  return;
}




void FUN_00102256(undefined8 param_1,undefined8 param_2)

{
  FUN_00102afc(param_1,param_2);
  FUN_00102b40(param_1,param_2);
  return;
}




undefined8 FUN_00104206(void)

{
  return 1;
}




void FUN_0010398a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010385d(param_3);
  FUN_001039e6(param_1,param_2,uVar1);
  return;
}




void FUN_0010193d(void)

{
  FUN_0010169b();
  FUN_001017cb();
  return;
}




undefined4 * FUN_001035ae(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103176(param_2);
  puVar2 = (undefined4 *)FUN_001037ba(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




undefined8 FUN_00102e58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_001037ba(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_0010385d(param_2);
  FUN_00103870(uVar1,uVar2);
  return;
}




void FUN_00101baa(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e4a(param_1);
  FUN_00101de0(param_1,uVar1);
  FUN_00101aa4(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c4) */
/* WARNING: Removing unreachable block (ram,0x001014d0) */

void FUN_001014a0(void)

{
  return;
}




void FUN_00103176(long param_1)

{
  FUN_00103590(param_1 + 0x20);
  return;
}




void FUN_00101dc0(void)

{
  return;
}




void FUN_0010423e(void)

{
  return;
}




void FUN_00102334(void)

{
  return;
}




void FUN_00101fb2(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined4 FUN_00101ece(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00102334(param_1);
  return unaff_EBX;
}




void FUN_00102d2a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_001019b7(0x28,param_2);
  uVar1 = FUN_00102412(param_5);
  uVar2 = FUN_00102400(param_4);
  uVar3 = FUN_001023ee(param_3);
  uVar4 = FUN_00102342(param_2);
  uVar5 = FUN_001033b2(param_1);
                    /* try { // try from 00102db9 to 00102dbd has its CatchHandler @ 00102dc0 */
  FUN_00103475(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_00103e09(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001045e0(void)

{
  return;
}




void FUN_00102a22(void)

{
  return;
}




ulong FUN_00104023(long param_1,ulong param_2,long param_3)

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




void FUN_00101a64(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_0010169b(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ae4(local_88);
  local_58[0] = 0;
                    /* try { // try from 001016ef to 00101752 has its CatchHandler @ 0010179e */
  puVar1 = (undefined4 *)FUN_00101be8(local_88,local_58);
  *puVar1 = 7;
  local_58[0] = 1;
  puVar1 = (undefined4 *)FUN_00101be8(local_88,local_58);
  *puVar1 = 7;
  local_58[0] = 2;
  puVar1 = (undefined4 *)FUN_00101be8(local_88,local_58);
  *puVar1 = 7;
  FUN_00101b24(local_58,local_88);
                    /* try { // try from 0010175a to 0010175e has its CatchHandler @ 00101789 */
  FUN_00103b2c(local_58);
  FUN_00101b04(local_58);
  FUN_00101b04(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00102e6e(long param_1)

{
  return param_1 + 0x20;
}




void FUN_0010211a(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001029a8(param_1,param_2);
  FUN_00102a22(param_1,param_2);
  FUN_00101a3a(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001037a8(undefined8 param_1)

{
  return param_1;
}




ulong FUN_00104127(long param_1,ulong param_2,long param_3)

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




void FUN_00104304(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001031dc(void)

{
  return;
}




void FUN_00102b40(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001033b2(param_1);
  FUN_001033ee(uVar1,param_2,1);
  return;
}




void FUN_001033ee(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103652(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102412(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103198(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101e8a(undefined8 param_1)

{
  FUN_001022e4(param_1);
  return;
}




void FUN_00101a3a(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00101a64(param_1);
  return;
}




void FUN_001021b6(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102a36(local_18,param_1);
  FUN_00102a54(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103612(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00103548(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103795(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001034e5(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00102e84(undefined8 param_1)

{
  FUN_0010284d(param_1);
  return;
}




void FUN_00103e8a(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




long FUN_00103080(long param_1)

{
  return param_1 + 0x18;
}




int FUN_00104224(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001042e3(void)

{
  return;
}




undefined8 FUN_001031ae(undefined8 param_1,undefined8 param_2)

{
  FUN_001029f8(param_1,param_2);
  return param_1;
}




void FUN_00103d8b(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_00103870(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102cfe(param_1);
  uVar2 = FUN_0010385d(param_2);
  FUN_001038fe(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00102cd4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102364(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_00101d14(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_0010211a(param_1,param_2);
  lVar1 = FUN_0010218a(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_001021a0(param_1);
                    /* try { // try from 00101d6f to 00101d73 has its CatchHandler @ 00101d79 */
    uVar3 = FUN_001021b6(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_0010396c(undefined8 param_1)

{
  FUN_001039c7(param_1);
  return;
}




void FUN_0010298a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103393(undefined8 param_1)

{
  FUN_00101a0d(param_1);
  return;
}




void FUN_001036ca(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001023ee(param_3);
  uVar1 = FUN_00102400(param_4);
  FUN_00101f50(local_38,uVar1);
  FUN_00102412(param_5);
  uVar1 = FUN_001019b7(8,param_2);
                    /* try { // try from 00103752 to 00103756 has its CatchHandler @ 00103759 */
  FUN_0010380c(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102afc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102342(param_2);
  uVar2 = FUN_001033b2(param_1);
  FUN_001033c4(uVar2,uVar1);
  return;
}




void FUN_00103c2b(undefined8 param_1)

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
  piVar1 = (int *)FUN_00101be8(param_1,&local_24);
  local_1c = *piVar1;
  local_18 = operator_new__(0x28);
  for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
    *(undefined4 *)((long)local_18 + (long)local_20 * 4) = 0;
  }
  if ((local_1c < 0) || (9 < local_1c)) {
    FUN_00103d33("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_1c * 4) = 1;
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      FUN_00103d8b(*(undefined4 *)((long)local_18 + (long)local_20 * 4));
    }
  }
  if (local_18 != (void *)0x0) {
    operator_delete__(local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001034f8(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010298a(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010380c(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_001038bc(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102342(long param_1)

{
  FUN_00102c4e(param_1 + 0x20);
  return;
}




undefined8 FUN_00101ea8(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00102ca4(undefined8 param_1)

{
  FUN_00103432(param_1);
  return;
}




void FUN_00103d59(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102cfe(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001033b2(param_1);
  FUN_00103447(uVar1,1);
  return;
}




undefined8 FUN_00102424(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102cfe(param_1);
  uVar2 = FUN_00102412(param_4);
  uVar3 = FUN_00102400(param_3);
  uVar4 = FUN_001023ee(param_2);
  FUN_00102d2a(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




long FUN_00102b7a(long param_1)

{
  return param_1 + 8;
}




void FUN_00103fc3(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101aa4(undefined8 param_1)

{
  FUN_00101b8a(param_1);
  return;
}




void FUN_00101de0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00102229(local_28);
    FUN_00101de0(param_1,uVar1);
    lVar2 = FUN_0010223f(local_28);
    FUN_00102256(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




undefined8 FUN_00103628(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00104296(void)

{
  return;
}




undefined8 FUN_001037f4(void)

{
  return 0x333333333333333;
}




undefined4 FUN_00101f16(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_001042f9(void)

{
  return;
}




void FUN_001038bc(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_0010396c(param_2);
  puVar2 = (undefined4 *)FUN_00102cc2(uVar1);
  *param_1 = *puVar2;
  param_1[1] = 0;
  return;
}




void FUN_00103db3(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8
FUN_00101fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00102412(param_5);
  uVar2 = FUN_00102400(param_4);
  uVar3 = FUN_001023ee(param_3);
  local_40 = FUN_00102424(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00102050 to 00102093 has its CatchHandler @ 001020d1 */
  uVar1 = FUN_0010284d(local_40);
  local_38 = FUN_001024a4(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00102256(param_1,local_40);
    FUN_0010298a(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_001028a0(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00101470();
    DAT_00109020 = 1;
    return;
  }
  return;
}




void FUN_00102a36(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001042c2(void)

{
  return;
}




void FUN_0010363e(void)

{
  return;
}




undefined8 FUN_00103420(undefined8 param_1)

{
  return param_1;
}




long FUN_00103206(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_001035ae(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00103612(param_2);
                    /* try { // try from 00103275 to 00103307 has its CatchHandler @ 00103333 */
    uVar2 = FUN_00103206(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00103628(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_001035ae(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00103612(local_38);
      uVar2 = FUN_00103206(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00103628(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00103eb5(undefined4 param_1)

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




void FUN_001029f8(undefined8 param_1,undefined8 param_2)

{
  FUN_001031dc(param_1,param_2);
  return;
}




void FUN_001033c4(undefined8 param_1,undefined8 param_2)

{
  FUN_0010363e(param_1,param_2);
  return;
}




void FUN_00102c6c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102364(param_2);
  FUN_00102cd4(param_1,uVar1);
  return;
}




undefined8
FUN_001028a0(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_00102b7a(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00102e84(param_3);
      uVar5 = FUN_0010284d(param_4);
      cVar1 = FUN_00101f16(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00102924;
      }
    }
  }
  bVar2 = true;
LAB_00102924:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_0010298a(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 FUN_00101f7a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102364(param_2);
  FUN_00102376(param_1,uVar1);
  return param_1;
}




void FUN_001042ee(void)

{
  return;
}




void FUN_0010453d(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 * FUN_001030de(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_00103795(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001033b2(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001034e5(undefined8 param_1)

{
  return param_1;
}




void FUN_00101dd0(void)

{
  return;
}




void FUN_001042ac(void)

{
  return;
}




undefined8 FUN_0010385d(undefined8 param_1)

{
  return param_1;
}




void FUN_00103475(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00102412(param_5);
  uVar2 = FUN_00102400(param_4);
  uVar3 = FUN_001023ee(param_3);
  FUN_001036ca(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00102364(undefined8 param_1)

{
  return param_1;
}




void FUN_00101529(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ae4(local_88);
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_58[0] = 0;
                    /* try { // try from 001015bf to 00101622 has its CatchHandler @ 0010166e */
  puVar4 = (uint *)FUN_00101be8(local_88,local_58);
  *puVar4 = uVar1;
  local_58[0] = 1;
  puVar4 = (uint *)FUN_00101be8(local_88,local_58);
  *puVar4 = uVar1;
  local_58[0] = 2;
  puVar4 = (uint *)FUN_00101be8(local_88,local_58);
  *puVar4 = uVar1;
  FUN_00101b24(local_58,local_88);
                    /* try { // try from 0010162a to 0010162e has its CatchHandler @ 00101659 */
  FUN_00103a2d(local_58);
  FUN_00101b04(local_58);
  FUN_00101b04(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010284d(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00103176(param_1);
  FUN_00103198(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102ea2(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_001034e5(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001042a1(void)

{
  return;
}




undefined8 FUN_00101952(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103d33("Calling good()...");
  FUN_0010193d();
  FUN_00103d33("Finished good()");
  FUN_00103d33("Calling bad()...");
  FUN_00101529();
  FUN_00103d33("Finished bad()");
  return 0;
}



