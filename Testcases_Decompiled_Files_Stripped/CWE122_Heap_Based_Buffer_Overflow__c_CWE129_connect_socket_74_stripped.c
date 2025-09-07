
void FUN_0010471c(undefined8 param_1)

{
  FUN_001047c2(param_1);
  return;
}




void FUN_001048cc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00103a34(local_28);
    FUN_001048cc(param_1,uVar1);
    lVar2 = FUN_00103b6c(local_28);
    FUN_00103432(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




undefined8 FUN_00102eba(undefined8 param_1)

{
  return param_1;
}




void FUN_00103dce(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102e96(param_3);
  uVar1 = FUN_00102ea8(param_4);
  FUN_00102b72(local_38,uVar1);
  FUN_00102eba(param_5);
  uVar1 = FUN_0010292d(8,param_2);
                    /* try { // try from 00103e56 to 00103e5a has its CatchHandler @ 00103e5d */
  FUN_00103f12(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103fe2(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  long in_FS_OFFSET;
  int local_b4;
  undefined local_a8 [48];
  undefined4 local_78 [12];
  sockaddr local_48;
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001046fc(local_a8);
  local_b4 = -1;
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    local_48.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_48.sa_data._0_2_ = htons(0x6987);
                    /* try { // try from 00104098 to 00104199 has its CatchHandler @ 001041e8 */
    iVar1 = connect(__fd,&local_48,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(__fd,local_2e,0xd,0);
      iVar1 = (int)sVar2;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_2e[iVar1] = '\0';
        local_b4 = atoi(local_2e);
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  local_78[0] = 0;
  piVar3 = (int *)FUN_00102956(local_a8,local_78);
  *piVar3 = local_b4;
  local_78[0] = 1;
  piVar3 = (int *)FUN_00102956(local_a8,local_78);
  *piVar3 = local_b4;
  local_78[0] = 2;
  piVar3 = (int *)FUN_00102956(local_a8,local_78);
  *piVar3 = local_b4;
  FUN_0010473c(local_78,local_a8);
                    /* try { // try from 001041a1 to 001041a5 has its CatchHandler @ 001041d3 */
  FUN_00102609(local_78);
  FUN_0010471c(local_78);
  FUN_0010471c(local_a8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00104bc8(void)

{
  return;
}




void FUN_00104ac0(void)

{
  return;
}




undefined8 FUN_00102b5f(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00104e68(undefined8 param_1)

{
  return param_1;
}




void FUN_0010457e(void)

{
  FUN_00104218();
  FUN_00104348();
  return;
}




undefined8 FUN_00104bdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103f12(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00103f64(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104348(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  long in_FS_OFFSET;
  int local_b4;
  undefined local_a8 [48];
  undefined4 local_78 [12];
  sockaddr local_48;
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001046fc(local_a8);
  local_b4 = -1;
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    local_48.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_48.sa_data._0_2_ = htons(0x6987);
                    /* try { // try from 001043fe to 001044ff has its CatchHandler @ 0010454e */
    iVar1 = connect(__fd,&local_48,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(__fd,local_2e,0xd,0);
      iVar1 = (int)sVar2;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_2e[iVar1] = '\0';
        local_b4 = atoi(local_2e);
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  local_78[0] = 0;
  piVar3 = (int *)FUN_00102956(local_a8,local_78);
  *piVar3 = local_b4;
  local_78[0] = 1;
  piVar3 = (int *)FUN_00102956(local_a8,local_78);
  *piVar3 = local_b4;
  local_78[0] = 2;
  piVar3 = (int *)FUN_00102956(local_a8,local_78);
  *piVar3 = local_b4;
  FUN_0010473c(local_78,local_a8);
                    /* try { // try from 00104507 to 0010450b has its CatchHandler @ 00104539 */
  FUN_0010281b(local_78);
  FUN_0010471c(local_78);
  FUN_0010471c(local_a8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0010467c(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00104ad4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 * FUN_00103a4a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00105860(void)

{
  return;
}




undefined4 * FUN_00104d9e(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103ab6(param_2);
  puVar2 = (undefined4 *)FUN_00104e2e(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




undefined8 FUN_00103732(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103470(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010473c(undefined8 param_1,undefined8 param_2)

{
  FUN_00104800(param_1,param_2);
  return;
}




void FUN_001051e8(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00105065(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_001055c1(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010558a,local_18);
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




undefined8 FUN_00104b9a(undefined8 param_1,undefined8 param_2)

{
  FUN_00104a96(param_1,param_2);
  return param_1;
}




long FUN_001049bc(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00103ed2(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00104218(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001046fc(local_88);
  local_58[0] = 0;
                    /* try { // try from 0010426c to 001042cf has its CatchHandler @ 0010431b */
  puVar1 = (undefined4 *)FUN_00102956(local_88,local_58);
  *puVar1 = 7;
  local_58[0] = 1;
  puVar1 = (undefined4 *)FUN_00102956(local_88,local_58);
  *puVar1 = 7;
  local_58[0] = 2;
  puVar1 = (undefined4 *)FUN_00102956(local_88,local_58);
  *puVar1 = 7;
  FUN_0010473c(local_58,local_88);
                    /* try { // try from 001042d7 to 001042db has its CatchHandler @ 00104306 */
  FUN_00102712(local_58);
  FUN_0010471c(local_58);
  FUN_0010471c(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void _FINI_0(void)

{
  if (DAT_0010a020 == '\0') {
    if (PTR___cxa_finalize_00109fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_0010a008);
    }
    FUN_00102550();
    DAT_0010a020 = 1;
    return;
  }
  return;
}




void FUN_00103bea(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00102eba(param_5);
  uVar2 = FUN_00102ea8(param_4);
  uVar3 = FUN_00102e96(param_3);
  FUN_00103dce(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_001056e9(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102aac(undefined8 param_1)

{
  FUN_00102d8c(param_1);
  return;
}




void FUN_00103a76(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103c5a(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00102ddc(void)

{
  return;
}




void FUN_00103d22(undefined8 param_1,undefined8 param_2)

{
  FUN_00103ebe(param_1,param_2);
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00102f4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00103732(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_001034a4(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_001037ae(local_50);
    cVar2 = FUN_00102b38(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_001037ae(local_50);
      cVar2 = FUN_00102b38(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00103a76(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00103798(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00103798(local_60);
          local_48[1] = 0;
          FUN_001037cc(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00103a4a(local_48);
          uVar6 = FUN_001037ae(*puVar5);
          cVar2 = FUN_00102b38(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_0010380c(local_60,param_3);
          }
          else {
            lVar3 = FUN_00103a34(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_001037cc(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_001039c0(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_001039aa(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_001039aa(local_60);
        uVar6 = FUN_001039aa(local_60);
        FUN_001039c0(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00103a08(local_48);
        uVar6 = FUN_001037ae(*puVar5);
        cVar2 = FUN_00102b38(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_0010380c(local_60,param_3);
        }
        else {
          lVar3 = FUN_00103a34(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_001037cc(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_001039c0(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_001032da;
  }
  lVar3 = FUN_00103782(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00102fee:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00103798(local_60);
    uVar6 = FUN_001037ae(*puVar5);
    cVar2 = FUN_00102b38(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00102fee;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00103798(local_60);
    local_48[1] = 0;
    FUN_001037cc(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_0010380c(local_60,param_3);
  }
LAB_001032da:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




ulong FUN_001052a9(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001060ec,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104766(long param_1)

{
  FUN_0010488c(param_1);
  FUN_001048ac(param_1);
  FUN_00104652(param_1 + 8);
  return;
}




undefined8 FUN_0010292d(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103cbc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103e99(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103c5a(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00102020(void)

{
  (*(code *)PTR_00109e98)();
  return;
}




void FUN_00104800(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00104936(param_1,param_2);
  lVar1 = FUN_001049a6(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_001049bc(param_1);
                    /* try { // try from 0010485b to 0010485f has its CatchHandler @ 00104865 */
    uVar3 = FUN_001049d2(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_001032f5(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00103ab6(param_1);
  FUN_00103ad8(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102bd4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001047c2(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010348e(param_1);
  FUN_001048cc(param_1,uVar1);
  FUN_001046bc(param_1);
  return;
}




void FUN_00105506(void)

{
  return;
}




undefined8 FUN_0010380c(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_0010348e(param_1);
  local_50 = FUN_001034a4(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_001032f5(local_58);
    local_59 = FUN_00102b38(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00103a34(local_58);
    }
    else {
      local_58 = FUN_00103b6c(local_58);
    }
  }
  FUN_00103470(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00103c6c(param_1);
    cVar1 = FUN_00102aca(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00103cbc(local_38,&local_58,&local_50);
      goto LAB_0010398e;
    }
    FUN_00103a08(&local_48);
  }
  uVar2 = FUN_001037ae(local_48);
  cVar1 = FUN_00102b38(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00103a76(local_38,&local_48,&local_40);
  }
  else {
    FUN_00103cbc(local_38,&local_58,&local_50);
  }
LAB_0010398e:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001057f0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001054c4(void)

{
  return;
}




undefined4 FUN_00102b38(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_00104d61(undefined8 param_1)

{
  FUN_001045f8(param_1);
  return;
}




void FUN_00103654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_0010292d(0x28,param_2);
  uVar1 = FUN_00102eba(param_5);
  uVar2 = FUN_00102ea8(param_4);
  uVar3 = FUN_00102e96(param_3);
  uVar4 = FUN_00102dea(param_2);
  uVar5 = FUN_00103baa(param_1);
                    /* try { // try from 001036e3 to 001036e7 has its CatchHandler @ 001036ea */
  FUN_00103bea(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_001046fc(undefined8 param_1)

{
  FUN_001046dc(param_1);
  return;
}




void FUN_00103f64(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103fa6(param_2);
  puVar2 = (undefined4 *)FUN_001035ec(uVar1);
  *param_1 = *puVar2;
  param_1[1] = 0;
  return;
}




void FUN_001047a2(undefined8 param_1)

{
  FUN_001048bc(param_1);
  return;
}




int FUN_001054aa(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103578(undefined8 param_1)

{
  FUN_00103b82(param_1);
  return;
}




undefined8 FUN_00102e96(undefined8 param_1)

{
  return param_1;
}




void FUN_0010557f(void)

{
  return;
}




void FUN_0010508f(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00104ec6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_0010292d(0x28,param_2);
  uVar1 = FUN_00104e68(param_3);
  uVar2 = FUN_00102dea(param_2);
  uVar3 = FUN_00103baa(param_1);
  FUN_00104f34(uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_0010570c(undefined8 *param_1)

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




void FUN_001054cf(void)

{
  return;
}




void FUN_00105548(void)

{
  return;
}




undefined8 FUN_00104e02(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00103d04(undefined8 param_1)

{
  FUN_00103eac(param_1);
  return;
}




void FUN_001054fb(void)

{
  return;
}




void FUN_00104e2e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00104e68(param_2);
  FUN_00104e7a(uVar1,uVar2);
  return;
}




void FUN_00105785(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




long FUN_001034a4(long param_1)

{
  return param_1 + 8;
}




void FUN_00103d4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103ed2(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00104af2(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_001034a4(param_1);
  uVar2 = FUN_00104bdc(param_2);
  uVar1 = FUN_00104bf2(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_001039aa(param_1);
  uVar2 = FUN_00104d61(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00103798(param_1);
  uVar2 = FUN_00104d7f(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




undefined8 FUN_001049a6(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00104652(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_0010467c(param_1);
  return;
}




undefined8 FUN_00103c6c(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103470(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00105011(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00105039(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00105574(void)

{
  return;
}




long FUN_001039aa(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00102dea(long param_1)

{
  FUN_00103578(param_1 + 0x20);
  return;
}




void FUN_00103b32(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103baa(param_1);
  FUN_00103d4c(uVar1,param_2,1);
  return;
}




void FUN_00105249(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001057a4(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001051bd(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8
FUN_00103348(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_001034a4(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_001037ae(param_3);
      uVar5 = FUN_001032f5(param_4);
      cVar1 = FUN_00102b38(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001033cc;
      }
    }
  }
  bVar2 = true;
LAB_001033cc:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00103470(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_001046dc(undefined8 param_1)

{
  FUN_00104766(param_1);
  return;
}




void FUN_00104fdf(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00102d8c(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103470(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00105195(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00103efa(void)

{
  return 0x333333333333333;
}




void FUN_00104d7f(undefined8 param_1)

{
  FUN_00104625(param_1);
  return;
}




long FUN_00102956(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00102a82(param_1,param_2);
  local_28 = FUN_00102aac(param_1);
  cVar2 = FUN_00102aca(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00102af0(param_1);
    uVar3 = FUN_00102b16(&local_38);
    cVar2 = FUN_00102b38(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_001029f6;
    }
  }
  bVar1 = true;
LAB_001029f6:
  if (bVar1) {
    uVar3 = FUN_00102b5f(param_2);
    FUN_00102b9c(local_30,uVar3);
    FUN_00102bd4(&local_28,&local_38);
    local_38 = FUN_00102bf6(param_1,local_28,&DAT_00106008,local_30,&local_39);
  }
  lVar4 = FUN_00102b16(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 4;
}




long FUN_001045f8(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




undefined8 FUN_0010548c(void)

{
  return 1;
}




undefined8 FUN_00104e18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00102e0c(undefined8 param_1)

{
  return param_1;
}




void FUN_00103aee(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102dea(param_2);
  uVar2 = FUN_00103baa(param_1);
  FUN_00103d22(uVar2,uVar1);
  return;
}




long FUN_00104625(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00104a96(undefined8 param_1,undefined8 param_2)

{
  FUN_00104bc8(param_1,param_2);
  return;
}




undefined8 FUN_0010348e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined4 FUN_00102af0(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00102ddc(param_1);
  return unaff_EBX;
}




void FUN_001035fe(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102e0c(param_2);
  *param_1 = uVar1;
  return;
}




/* WARNING: Removing unreachable block (ram,0x00102563) */
/* WARNING: Removing unreachable block (ram,0x0010256f) */

void FUN_00102550(void)

{
  return;
}




void FUN_00103432(undefined8 param_1,undefined8 param_2)

{
  FUN_00103aee(param_1,param_2);
  FUN_00103b32(param_1,param_2);
  return;
}




void FUN_00105527(void)

{
  return;
}




void FUN_001054e5(void)

{
  return;
}




void FUN_001054f0(void)

{
  return;
}




void FUN_001039c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103c5a(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103c5a(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001037cc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00103c5a(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00105569(void)

{
  return;
}




void FUN_00102e1e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102e0c(param_2);
  FUN_00103596(param_1,uVar1);
  return;
}




void FUN_00103fa6(undefined8 param_1)

{
  FUN_00103fc4(param_1);
  return;
}




undefined8 FUN_00102ea8(undefined8 param_1)

{
  return param_1;
}




void FUN_001046bc(undefined8 param_1)

{
  FUN_001047a2(param_1);
  return;
}




void FUN_001049d2(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104ad4(local_18,param_1);
  FUN_00104af2(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00105553(void)

{
  return;
}




void FUN_00103470(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00103eac(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103baa(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010549b(void)

{
  return 0;
}




undefined8
FUN_00102bf6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00102eba(param_5);
  uVar2 = FUN_00102ea8(param_4);
  uVar3 = FUN_00102e96(param_3);
  local_40 = FUN_00102ecc(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00102c72 to 00102cb5 has its CatchHandler @ 00102cf3 */
  uVar1 = FUN_001032f5(local_40);
  local_38 = FUN_00102f4c(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00103432(param_1,local_40);
    FUN_00103470(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00103348(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




undefined8 FUN_00103c5a(undefined8 param_1)

{
  return param_1;
}




void FUN_0010281b(undefined8 param_1)

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
  piVar1 = (int *)FUN_00102956(param_1,&local_24);
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
    FUN_00104fb9("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_1c * 4) = 1;
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      FUN_00105011(*(undefined4 *)((long)local_18 + (long)local_20 * 4));
    }
  }
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104f72(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_00104e68(param_3);
  puVar2 = (undefined8 *)FUN_0010292d(8,param_2);
  *puVar2 = *puVar1;
  return;
}




void FUN_00103596(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102e0c(param_2);
  FUN_001035fe(param_1,uVar1);
  return;
}




void FUN_00103ab6(long param_1)

{
  FUN_00103d04(param_1 + 0x20);
  return;
}




undefined8 FUN_00102aca(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00105511(void)

{
  return;
}




void FUN_0010551c(void)

{
  return;
}




void FUN_00103d7e(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103efa(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x28);
  return;
}




void FUN_001037ae(undefined8 param_1)

{
  FUN_001032f5(param_1);
  return;
}




void FUN_0010553d(void)

{
  return;
}




undefined8 FUN_00103b82(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102b9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102e0c(param_2);
  FUN_00102e1e(param_1,uVar1);
  return param_1;
}




undefined8 FUN_00103e99(undefined8 param_1)

{
  return param_1;
}




void FUN_001050e5(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102d3c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001034a4(param_1);
  uVar2 = FUN_0010348e(param_1);
  FUN_001034ba(param_1,uVar2,uVar1,param_2);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001025a4) */
/* WARNING: Removing unreachable block (ram,0x001025b0) */

void FUN_00102580(void)

{
  return;
}




void FUN_00102b16(undefined8 *param_1)

{
  FUN_00102dea(*param_1);
  return;
}




undefined8 FUN_00104593(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00104fb9("Calling good()...");
  FUN_0010457e();
  FUN_00104fb9("Finished good()");
  FUN_00104fb9("Calling bad()...");
  FUN_00103fe2();
  FUN_00104fb9("Finished bad()");
  return 0;
}




void FUN_00104fb9(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 * FUN_00103a08(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_0010513b(undefined4 param_1)

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




void FUN_0010488c(undefined8 param_1)

{
  FUN_00104a36(param_1);
  return;
}




undefined8 FUN_00103b6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00104a45(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104b9a(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00103bbc(undefined8 param_1,undefined8 param_2)

{
  FUN_00103d7e(param_1,param_2,0);
  return;
}




void FUN_00103ebe(void)

{
  return;
}




void FUN_00105216(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102a82(undefined8 param_1,undefined8 param_2)

{
  FUN_00102d3c(param_1,param_2);
  return;
}




void FUN_00104f34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00104e68(param_3);
  FUN_00104f72(param_1,param_2,uVar1);
  return;
}




void FUN_00104936(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104a45(param_1,param_2);
  FUN_00104ac0(param_1,param_2);
  FUN_00104652(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103a34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00103628(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103baa(param_1);
  FUN_00103bbc(uVar1,1);
  return;
}




undefined8 FUN_001034ba(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_001032f5(local_38);
    cVar1 = FUN_00102b38(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00103a34(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00103b6c(local_38);
    }
  }
  FUN_00103470(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_001050ba(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103fc4(undefined8 param_1)

{
  FUN_001035ce(param_1);
  return;
}




void FUN_00102943(void)

{
  return;
}




undefined8 FUN_001035ec(undefined8 param_1)

{
  return param_1;
}




void FUN_00102b72(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e56(param_1,param_2);
  return;
}




void FUN_001057c3(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00104e7a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103628(param_1);
  uVar2 = FUN_00104e68(param_2);
  FUN_00104ec6(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00105532(void)

{
  return;
}




void FUN_0010558a(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102712(undefined8 param_1)

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
  piVar1 = (int *)FUN_00102956(param_1,&local_24);
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
    FUN_00104fb9("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_1c * 4) = 1;
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      FUN_00105011(*(undefined4 *)((long)local_18 + (long)local_20 * 4));
    }
  }
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104a36(void)

{
  return;
}




long FUN_00104bf2(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00104d9e(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00104e02(param_2);
                    /* try { // try from 00104c61 to 00104cf3 has its CatchHandler @ 00104d1f */
    uVar2 = FUN_00104bf2(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00104e18(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00104d9e(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00104e02(local_38);
      uVar2 = FUN_00104bf2(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00104e18(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




undefined8 FUN_00102ecc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00103628(param_1);
  uVar2 = FUN_00102eba(param_4);
  uVar3 = FUN_00102ea8(param_3);
  uVar4 = FUN_00102e96(param_2);
  FUN_00103654(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




undefined8 FUN_00103ad8(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001035ce(undefined8 param_1)

{
  FUN_00103b94(param_1);
  return;
}




long FUN_00103798(long param_1)

{
  return param_1 + 0x20;
}




ulong FUN_001053ad(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001060f4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00105110(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001048bc(void)

{
  return;
}




undefined8 FUN_00103b94(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00103782(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_001054da(void)

{
  return;
}




void FUN_0010555e(void)

{
  return;
}




void FUN_00102609(undefined8 param_1)

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
  piVar1 = (int *)FUN_00102956(param_1,&local_24);
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
    FUN_00104fb9("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_1c * 4) = 1;
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      FUN_00105011(*(undefined4 *)((long)local_18 + (long)local_20 * 4));
    }
  }
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102e56(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001035ce(param_2);
  uVar1 = FUN_001035ec(uVar1);
  FUN_001035fe(param_1,uVar1);
  return;
}




bool FUN_0010568e(pthread_t *param_1)

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




void FUN_001048ac(void)

{
  return;
}



