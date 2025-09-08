
undefined8 FUN_00101ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102428(param_1);
  uVar2 = FUN_00101cba(param_4);
  uVar3 = FUN_00101ca8(param_3);
  uVar4 = FUN_00101c96(param_2);
  FUN_00102454(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




undefined8 FUN_00103fba(void)

{
  return 0;
}




void FUN_00104030(void)

{
  return;
}




void FUN_00102396(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c0c(param_2);
  FUN_001023fe(param_1,uVar1);
  return;
}




void FUN_00102d12(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102d64(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010398e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102428(param_1);
  uVar2 = FUN_0010397c(param_2);
  FUN_001039da(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_001025ae(undefined8 param_1)

{
  FUN_001020f5(param_1);
  return;
}




void FUN_00102378(undefined8 param_1)

{
  FUN_00102982(param_1);
  return;
}




void FUN_00103bd9(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_0010199c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c0c(param_2);
  FUN_00101c1e(param_1,uVar1);
  return param_1;
}




void FUN_001042e2(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010165b(undefined8 param_1)

{
  undefined8 *puVar1;
  size_t __n;
  long in_FS_OFFSET;
  undefined4 local_54;
  char *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ushort local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_54 = 2;
  puVar1 = (undefined8 *)FUN_00101756(param_1,&local_54);
  local_50 = (char *)*puVar1;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  __n = strlen(local_50);
  memmove(&local_48,local_50,__n);
  local_18 = local_18 & 0xff;
  FUN_00103ad8(local_50);
  if (local_50 != (char *)0x0) {
    operator_delete__(local_50);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001029ea(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101cba(param_5);
  uVar2 = FUN_00101ca8(param_4);
  uVar3 = FUN_00101c96(param_3);
  FUN_00102bce(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_0010195f(undefined8 param_1)

{
  return param_1;
}




undefined4 FUN_00101938(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_00103c5a(undefined4 param_1)

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




void FUN_00103b30(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103c2f(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103d68(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




long FUN_001034d0(long param_1)

{
  return param_1 + 0x10;
}




void FUN_001018ac(undefined8 param_1)

{
  FUN_00101b8c(param_1);
  return;
}




void FUN_0010327a(long param_1)

{
  FUN_001033a0(param_1);
  FUN_001033c0(param_1);
  FUN_00103166(param_1 + 8);
  return;
}




void FUN_001042c3(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




int FUN_00103fc9(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8
FUN_001019f6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101cba(param_5);
  uVar2 = FUN_00101ca8(param_4);
  uVar3 = FUN_00101c96(param_3);
  local_40 = FUN_00101ccc(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101a72 to 00101ab5 has its CatchHandler @ 00101af3 */
  uVar1 = FUN_001020f5(local_40);
  local_38 = FUN_00101d4c(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00102232(param_1,local_40);
    FUN_00102270(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00102148(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00104051(void)

{
  return;
}




void FUN_001040a9(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00103ad8(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102428(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001029aa(param_1);
  FUN_001029bc(uVar1,1);
  return;
}




void FUN_00103c04(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 * FUN_00102808(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_001023ce(undefined8 param_1)

{
  FUN_00102994(param_1);
  return;
}




long FUN_00103706(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_001038b2(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00103916(param_2);
                    /* try { // try from 00103775 to 00103807 has its CatchHandler @ 00103833 */
    uVar2 = FUN_00103706(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_0010392c(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_001038b2(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00103916(local_38);
      uVar2 = FUN_00103706(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_0010392c(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




undefined8 FUN_0010296c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001034e6(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001035e8(local_18,param_1);
  FUN_00103606(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined4 FUN_001018f0(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101bdc(param_1);
  return unaff_EBX;
}




void FUN_00102b7e(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102cfa(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




undefined8 FUN_0010392c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102da7(undefined8 param_1)

{
  FUN_00102dc5(param_1);
  return;
}




void FUN_00103fe3(void)

{
  return;
}




void FUN_001028b6(long param_1)

{
  FUN_00102b04(param_1 + 0x20);
  return;
}




undefined4 * FUN_001038b2(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001028b6(param_2);
  puVar2 = (undefined4 *)FUN_00103942(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_001025cc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00102a5a(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00101bea(long param_1)

{
  FUN_00102378(param_1 + 0x20);
  return;
}




void FUN_00104004(void)

{
  return;
}




undefined8 FUN_0010228e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102dc5(undefined8 param_1)

{
  FUN_001023ce(param_1);
  return;
}




long FUN_001022a4(long param_1)

{
  return param_1 + 8;
}




void FUN_00102abc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102c99(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102a5a(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001023fe(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c0c(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_00103ff9(void)

{
  return;
}




undefined8 FUN_001018ca(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00101916(undefined8 *param_1)

{
  FUN_00101bea(*param_1);
  return;
}




undefined8 FUN_00101ca8(undefined8 param_1)

{
  return param_1;
}




void FUN_001033c0(void)

{
  return;
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




/* WARNING: Type propagation algorithm not settling */

long FUN_00101d4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00102532(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_001022a4(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_001025ae(local_50);
    cVar2 = FUN_00101938(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_001025ae(local_50);
      cVar2 = FUN_00101938(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00102876(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102598(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102598(local_60);
          local_48[1] = 0;
          FUN_001025cc(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_0010284a(local_48);
          uVar6 = FUN_001025ae(*puVar5);
          cVar2 = FUN_00101938(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_0010260c(local_60,param_3);
          }
          else {
            lVar3 = FUN_00102834(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_001025cc(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_001027c0(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_001027aa(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_001027aa(local_60);
        uVar6 = FUN_001027aa(local_60);
        FUN_001027c0(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00102808(local_48);
        uVar6 = FUN_001025ae(*puVar5);
        cVar2 = FUN_00101938(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_0010260c(local_60,param_3);
        }
        else {
          lVar3 = FUN_00102834(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_001025cc(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_001027c0(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_001020da;
  }
  lVar3 = FUN_00102582(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101dee:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102598(local_60);
    uVar6 = FUN_001025ae(*puVar5);
    cVar2 = FUN_00101938(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101dee;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102598(local_60);
    local_48[1] = 0;
    FUN_001025cc(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_0010260c(local_60,param_3);
  }
LAB_001020da:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_001029bc(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b7e(param_1,param_2,0);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014e3) */
/* WARNING: Removing unreachable block (ram,0x001014ef) */

void FUN_001014d0(void)

{
  return;
}




void FUN_00103250(undefined8 param_1,undefined8 param_2)

{
  FUN_00103314(param_1,param_2);
  return;
}




undefined8 FUN_00103fab(void)

{
  return 1;
}




void FUN_00103b58(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103fee(void)

{
  return;
}




void FUN_00101589(undefined8 param_1)

{
  undefined8 *puVar1;
  size_t __n;
  long in_FS_OFFSET;
  undefined4 local_54;
  char *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ushort local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_54 = 2;
  puVar1 = (undefined8 *)FUN_00101756(param_1,&local_54);
  local_50 = (char *)*puVar1;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  __n = strlen(local_50);
  memmove(&local_48,local_50,__n);
  local_18 = local_18 & 0xff;
  FUN_00103ad8(local_50);
  if (local_50 != (char *)0x0) {
    operator_delete__(local_50);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103166(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00103190(param_1);
  return;
}




undefined8 FUN_0010172d(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102cd2(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




long FUN_00102598(long param_1)

{
  return param_1 + 0x20;
}




undefined8 FUN_001040e0(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001040a9,local_18);
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




void FUN_0010409e(void)

{
  return;
}




bool FUN_001041ad(pthread_t *param_1)

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




undefined8 FUN_0010260c(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_0010228e(param_1);
  local_50 = FUN_001022a4(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_001020f5(local_58);
    local_59 = FUN_00101938(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00102834(local_58);
    }
    else {
      local_58 = FUN_0010296c(local_58);
    }
  }
  FUN_00102270(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00102a6c(param_1);
    cVar1 = FUN_001018ca(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102abc(local_38,&local_58,&local_50);
      goto LAB_0010278e;
    }
    FUN_00102808(&local_48);
  }
  uVar2 = FUN_001025ae(local_48);
  cVar1 = FUN_00101938(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00102876(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102abc(local_38,&local_58,&local_50);
  }
LAB_0010278e:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00103916(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_00101c0c(undefined8 param_1)

{
  return param_1;
}




void FUN_00104310(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




long FUN_0010310c(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_00103942(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_0010397c(param_2);
  FUN_0010398e(uVar1,uVar2);
  return;
}




void FUN_00104072(void)

{
  return;
}




void FUN_00104046(void)

{
  return;
}




undefined8 FUN_001023ec(undefined8 param_1)

{
  return param_1;
}




void FUN_00103d35(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00103893(undefined8 param_1)

{
  FUN_00103139(param_1);
  return;
}




void FUN_001033d0(void)

{
  return;
}




void FUN_00102bce(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c96(param_3);
  uVar1 = FUN_00101ca8(param_4);
  FUN_00101972(local_38,uVar1);
  FUN_00101cba(param_5);
  uVar1 = FUN_0010172d(0x10,param_2);
                    /* try { // try from 00102c56 to 00102c5a has its CatchHandler @ 00102c5d */
  FUN_00102d12(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001035d4(void)

{
  return;
}




void FUN_00101972(undefined8 param_1,undefined8 param_2)

{
  FUN_00101c56(param_1,param_2);
  return;
}




void FUN_00102de3(void)

{
  void *__s;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103210(local_88);
                    /* try { // try from 00102e13 to 00102ec4 has its CatchHandler @ 00102f10 */
  __s = operator_new__(100);
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  local_58[0] = 0;
  puVar1 = (undefined8 *)FUN_00101756(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 1;
  puVar1 = (undefined8 *)FUN_00101756(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 2;
  puVar1 = (undefined8 *)FUN_00101756(local_88,local_58);
  *puVar1 = __s;
  FUN_00103250(local_58,local_88);
                    /* try { // try from 00102ecc to 00102ed0 has its CatchHandler @ 00102efb */
  FUN_00101589(local_58);
  FUN_00103230(local_58);
  FUN_00103230(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101b3c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001022a4(param_1);
  uVar2 = FUN_0010228e(param_1);
  FUN_001022ba(param_1,uVar2,uVar1,param_2);
  return;
}




ulong FUN_00103ecc(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_0010509c,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102454(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_0010172d(0x30,param_2);
  uVar1 = FUN_00101cba(param_5);
  uVar2 = FUN_00101ca8(param_4);
  uVar3 = FUN_00101c96(param_3);
  uVar4 = FUN_00101bea(param_2);
  uVar5 = FUN_001029aa(param_1);
                    /* try { // try from 001024e3 to 001024e7 has its CatchHandler @ 001024ea */
  FUN_001029ea(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




undefined8
FUN_00102148(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_001022a4(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_001025ae(param_3);
      uVar5 = FUN_001020f5(param_4);
      cVar1 = FUN_00101938(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001021cc;
      }
    }
  }
  bVar2 = true;
LAB_001021cc:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00102270(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 FUN_00101c96(undefined8 param_1)

{
  return param_1;
}




void FUN_00102b4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102cd2(param_1,param_2,param_3);
  return;
}




void FUN_00103afe(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001042a4(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001028ee(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101bea(param_2);
  uVar2 = FUN_001029aa(param_1);
  FUN_00102b22(uVar2,uVar1);
  return;
}




void FUN_00103cdc(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




long FUN_00101756(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00101882(param_1,param_2);
  local_28 = FUN_001018ac(param_1);
  cVar2 = FUN_001018ca(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_001018f0(param_1);
    uVar3 = FUN_00101916(&local_38);
    cVar2 = FUN_00101938(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_001017f6;
    }
  }
  bVar1 = true;
LAB_001017f6:
  if (bVar1) {
    uVar3 = FUN_0010195f(param_2);
    FUN_0010199c(local_30,uVar3);
    FUN_001019d4(&local_28,&local_38);
    local_38 = FUN_001019f6(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_00101916(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




undefined8 FUN_0010422b(undefined8 *param_1)

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




undefined8 FUN_00102c99(undefined8 param_1)

{
  return param_1;
}




void FUN_00102270(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001035aa(undefined8 param_1,undefined8 param_2)

{
  FUN_001036dc(param_1,param_2);
  return;
}




void FUN_00103d07(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_001030a7(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103ad8("Calling good()...");
  FUN_00103097();
  FUN_00103ad8("Finished good()");
  FUN_00103ad8("Calling bad()...");
  FUN_00102de3();
  FUN_00103ad8("Finished bad()");
  return 0;
}




undefined8 FUN_00102994(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00103210(undefined8 param_1)

{
  FUN_001031f0(param_1);
  return;
}




undefined8 FUN_00104208(void *param_1)

{
  free(param_1);
  return 1;
}




long FUN_001027aa(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00102f3d(void)

{
  void *__s;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103210(local_88);
                    /* try { // try from 00102f6d to 0010301e has its CatchHandler @ 0010306a */
  __s = operator_new__(100);
  memset(__s,0x41,0x31);
  *(undefined *)((long)__s + 0x31) = 0;
  local_58[0] = 0;
  puVar1 = (undefined8 *)FUN_00101756(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 1;
  puVar1 = (undefined8 *)FUN_00101756(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 2;
  puVar1 = (undefined8 *)FUN_00101756(local_88,local_58);
  *puVar1 = __s;
  FUN_00103250(local_58,local_88);
                    /* try { // try from 00103026 to 0010302a has its CatchHandler @ 00103055 */
  FUN_0010165b(local_58);
  FUN_00103230(local_58);
  FUN_00103230(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101c1e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c0c(param_2);
  FUN_00102396(param_1,uVar1);
  return;
}




void FUN_00101743(void)

{
  return;
}




undefined8 FUN_001022ba(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_001020f5(local_38);
    cVar1 = FUN_00101938(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00102834(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_0010296c(local_38);
    }
  }
  FUN_00102270(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_001033e0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00102834(local_28);
    FUN_001033e0(param_1,uVar1);
    lVar2 = FUN_0010296c(local_28);
    FUN_00102232(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_001033a0(undefined8 param_1)

{
  FUN_0010354a(param_1);
  return;
}




undefined8 FUN_00102cac(undefined8 param_1)

{
  return param_1;
}




void FUN_00103b84(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00102cfa(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




ulong FUN_00103dc8(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00105094,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010405c(void)

{
  return;
}




void FUN_00103097(void)

{
  FUN_00102f3d();
  return;
}




void FUN_00103a48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010397c(param_3);
  FUN_00103a86(param_1,param_2,uVar1);
  return;
}




void FUN_001036dc(void)

{
  return;
}




void FUN_00102b04(undefined8 param_1)

{
  FUN_00102cac(param_1);
  return;
}




void FUN_001019d4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103875(undefined8 param_1)

{
  FUN_0010310c(param_1);
  return;
}




void FUN_00102876(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a5a(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00103190(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_0010354a(void)

{
  return;
}




undefined8 FUN_00102982(undefined8 param_1)

{
  return param_1;
}




void FUN_00104088(void)

{
  return;
}




undefined8 FUN_0010397c(undefined8 param_1)

{
  return param_1;
}




void FUN_00103314(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_0010344a(param_1,param_2);
  lVar1 = FUN_001034ba(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_001034d0(param_1);
                    /* try { // try from 0010336f to 00103373 has its CatchHandler @ 00103379 */
    uVar3 = FUN_001034e6(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




undefined8 FUN_00103606(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_001022a4(param_1);
  uVar2 = FUN_001036f0(param_2);
  uVar1 = FUN_00103706(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_001027aa(param_1);
  uVar2 = FUN_00103875(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102598(param_1);
  uVar2 = FUN_00103893(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




undefined8 FUN_00102532(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102270(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101c56(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001023ce(param_2);
  uVar1 = FUN_001023ec(uVar1);
  FUN_001023fe(param_1,uVar1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101524) */
/* WARNING: Removing unreachable block (ram,0x00101530) */

void FUN_00101500(void)

{
  return;
}




undefined8 FUN_00102a6c(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102270(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001039da(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_0010172d(0x30,param_2);
  uVar1 = FUN_0010397c(param_3);
  uVar2 = FUN_00101bea(param_2);
  uVar3 = FUN_001029aa(param_1);
  FUN_00103a48(uVar3,uVar2,uVar1);
  return;
}




void FUN_00102b22(undefined8 param_1,undefined8 param_2)

{
  FUN_00102cbe(param_1,param_2);
  return;
}




void FUN_001027c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a5a(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102a5a(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_001029aa(undefined8 param_1)

{
  return param_1;
}




void FUN_00103cb4(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101882(undefined8 param_1,undefined8 param_2)

{
  FUN_00101b3c(param_1,param_2);
  return;
}




void FUN_00101bdc(void)

{
  return;
}




void FUN_0010344a(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103559(param_1,param_2);
  FUN_001035d4(param_1,param_2);
  FUN_00103166(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010400f(void)

{
  return;
}




void FUN_001035e8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00101cba(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001036f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103a86(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_0010397c(param_3);
  puVar3 = (undefined8 *)FUN_0010172d(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_00102232(undefined8 param_1,undefined8 param_2)

{
  FUN_001028ee(param_1,param_2);
  FUN_00102932(param_1,param_2);
  return;
}




void FUN_00102932(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001029aa(param_1);
  FUN_00102b4c(uVar1,param_2,1);
  return;
}




void FUN_0010403b(void)

{
  return;
}




undefined8 FUN_001034ba(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103230(undefined8 param_1)

{
  FUN_001032d6(param_1);
  return;
}




long FUN_00103139(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00103bae(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_001028d8(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001031f0(undefined8 param_1)

{
  FUN_0010327a(param_1);
  return;
}




undefined8 FUN_00102a5a(undefined8 param_1)

{
  return param_1;
}




void FUN_00104093(void)

{
  return;
}




undefined8 * FUN_0010284a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_001020f5(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001028b6(param_1);
  FUN_001028d8(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104067(void)

{
  return;
}




void FUN_00102d64(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102da7(param_2);
  puVar2 = (undefined4 *)FUN_001023ec(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




undefined8 FUN_00103559(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001036ae(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_0010407d(void)

{
  return;
}




void FUN_001031d0(undefined8 param_1)

{
  FUN_001032b6(param_1);
  return;
}




void FUN_001032d6(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010228e(param_1);
  FUN_001033e0(param_1,uVar1);
  FUN_001031d0(param_1);
  return;
}




undefined8 FUN_00101b8c(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102270(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104025(void)

{
  return;
}




undefined8 FUN_001036ae(undefined8 param_1,undefined8 param_2)

{
  FUN_001035aa(param_1,param_2);
  return param_1;
}




void FUN_001032b6(undefined8 param_1)

{
  FUN_001033d0(param_1);
  return;
}




undefined8 FUN_00102582(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




undefined8 FUN_00102834(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00102cbe(void)

{
  return;
}




void FUN_0010401a(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108eb8)();
  return;
}




void FUN_00104380(void)

{
  return;
}



