
void FUN_00102ada(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




ulong FUN_00102d32(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_0010321e(param_1);
  lVar2 = FUN_00102898(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102898(local_40);
  local_30 = FUN_00102898(local_40);
  plVar3 = (long *)FUN_00103244(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102898(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_0010321e(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_0010321e(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong * FUN_0010366b(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103f56(void)

{
  return;
}




void FUN_00102ff5(void)

{
  return;
}




void FUN_00102cfd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031e8(param_1,param_2,param_3);
  return;
}




void FUN_00101dfc(undefined8 param_1)

{
  FUN_0010216c(param_1);
  return;
}




void FUN_001022c6(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102d32(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_001027e6(local_80);
      local_60 = FUN_00102bc0(&local_88,&local_78);
      local_70 = FUN_00102e22(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_001021b6(local_80);
                    /* try { // try from 001025d0 to 0010265b has its CatchHandler @ 00102713 */
      FUN_00102cfd(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_001021b6(local_80);
      puVar2 = (undefined8 *)FUN_00102218(&local_88);
      local_70 = FUN_00102e59(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_001021b6(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00102218(&local_88);
      local_70 = FUN_00102e59(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_001021b6(local_80);
      FUN_001021c8(*local_80,local_80[1],uVar1);
      FUN_0010217c(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_00102b0e(local_38,param_1,param_4);
                    /* try { // try from 00102350 to 00102523 has its CatchHandler @ 001026f5 */
      local_50 = FUN_00102ba2(local_38);
      local_78 = FUN_00101eb6(local_80);
      local_48 = FUN_00102bc0(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_001021b6(local_80);
        FUN_00102c04(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00102218(&local_88);
        FUN_00102c5c(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00102218(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00102218(&local_88);
        FUN_00102cac(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_001021b6(local_80);
        lVar4 = FUN_00102cfd(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_001021b6(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00102218(&local_88);
        FUN_00102c04(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00102218(&local_88);
        FUN_00102cac(*puVar2,local_40,local_50);
      }
      FUN_00102b6e(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010411a(undefined8 *param_1)

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




void FUN_00101f34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_0010222a(param_1);
  local_18 = FUN_00102281(&local_38,&local_20);
  local_20 = FUN_001027e6(local_30);
  uVar1 = FUN_00102832(&local_20,local_18);
  FUN_001022c6(local_30,uVar1,param_3,param_4);
  local_20 = FUN_001027e6(local_30);
  FUN_00102832(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103332(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_0010301e(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101d59(8,param_2);
  *puVar2 = uVar1;
  return;
}




undefined8 FUN_0010222a(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102ada(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102218(undefined8 param_1)

{
  return param_1;
}




void FUN_001041d1(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00103f98(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001041b2(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103c24(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_0010217c(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102a7d(param_1,param_2,param_3);
  }
  return;
}




void FUN_00103a47(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00102832(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_001021f6(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103f82(void)

{
  return;
}




void FUN_00102ede(undefined8 param_1,undefined8 param_2)

{
  FUN_001032ee(param_1,param_2);
  return;
}




void FUN_00104193(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00103097(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010338a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101cf4(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001039c7("Calling good()...");
  FUN_00101cdf();
  FUN_001039c7("Finished good()");
  FUN_001039c7("Calling bad()...");
  FUN_0010179e();
  FUN_001039c7("Finished bad()");
  return 0;
}




undefined8 FUN_00102e22(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00103273(param_1,param_2);
  }
  return uVar1;
}




void FUN_0010179e(void)

{
  long in_FS_OFFSET;
  wchar_t *local_70;
  undefined8 local_68;
  wchar_t *local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101db0(local_58);
  local_70 = (wchar_t *)0x0;
  local_60 = (wchar_t *)malloc(200);
  if (local_60 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  wmemset(local_60,L'A',0x31);
  local_60[0x31] = L'\0';
  local_70 = local_60;
  local_68 = FUN_00101eb6(local_58);
  FUN_00101f06(local_38,&local_68);
                    /* try { // try from 00101855 to 001018ea has its CatchHandler @ 00101936 */
  FUN_00101f34(local_58,local_38[0],1,&local_70);
  local_68 = FUN_00101eb6(local_58);
  FUN_00101f06(local_38,&local_68);
  FUN_00101f34(local_58,local_38[0],1,&local_70);
  local_68 = FUN_00101eb6(local_58);
  FUN_00101f06(local_38,&local_68);
  FUN_00101f34(local_58,local_38[0],1,&local_70);
  FUN_00101ffa(local_38,local_58);
                    /* try { // try from 001018f2 to 001018f6 has its CatchHandler @ 00101921 */
  FUN_001015c9(local_38);
  FUN_00101e6e(local_38);
  FUN_00101e6e(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103efe(void)

{
  return;
}




void FUN_00101659(undefined8 param_1)

{
  char *__s;
  undefined8 *puVar1;
  size_t sVar2;
  char *__dest;
  
  puVar1 = (undefined8 *)FUN_0010177a(param_1,2);
  __s = (char *)*puVar1;
  sVar2 = strlen(__s);
  __dest = (char *)calloc(sVar2 + 1,1);
  if (__dest == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  strcpy(__dest,__s);
  FUN_001039c7(__dest);
  free(__dest);
  return;
}




ulong * FUN_00103244(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103c57(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001021c8(undefined8 param_1,undefined8 param_2)

{
  FUN_00102aaf(param_1,param_2);
  return;
}




undefined8 FUN_00103459(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_0010364d(param_1);
  puVar1 = (undefined8 *)FUN_0010366b(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00103f35(void)

{
  return;
}




undefined8 FUN_001036b2(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103198(undefined8 param_1)

{
  return param_1;
}




void FUN_00103f1f(void)

{
  return;
}




long FUN_00103008(long param_1)

{
  return param_1 + 8;
}




void FUN_00102922(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f08(param_1,param_3);
                    /* try { // try from 0010295c to 00102960 has its CatchHandler @ 00102963 */
  FUN_00102f3e(param_1,param_2);
  return;
}




void FUN_00102c04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103097(param_2);
  uVar2 = FUN_00103097(param_1);
  FUN_001030e3(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_001036c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00103198(param_3);
  uVar2 = FUN_001037cd(local_28);
  uVar3 = FUN_001037cd(local_20);
  uVar1 = FUN_001037ee(uVar3,uVar2,uVar1);
  FUN_00103412(&local_30,uVar1);
  return;
}




void FUN_00102c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103118(param_2);
  uVar2 = FUN_00103118(param_1);
  FUN_0010312a(uVar2,uVar1,param_3);
  return;
}




void FUN_001033a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103558(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102eb1(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ede(param_1,param_2);
  return param_1;
}




undefined8 FUN_001021b6(undefined8 param_1)

{
  return param_1;
}




void FUN_001021f6(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00102a7d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102fce(param_1,param_2,param_3);
  return;
}




void FUN_00103b1e(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




long FUN_0010177a(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




undefined8 FUN_00102afc(undefined8 param_1)

{
  return param_1;
}




void FUN_00103301(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103508(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00101eb6(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021f6(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103a1f(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_00103fcf(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103f98,local_18);
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




void FUN_00101f06(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102218(param_2);
  *param_1 = *puVar1;
  return;
}




undefined8 FUN_00101d59(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void * FUN_001038b7(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00101ffa(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102910(param_2);
  FUN_001028bf(&local_31,uVar1);
  uVar1 = FUN_00102898(param_2);
                    /* try { // try from 00102060 to 00102064 has its CatchHandler @ 001020cd */
  FUN_00102922(param_1,uVar1,&local_31);
  FUN_00101dfc(&local_31);
  uVar2 = FUN_001021b6(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_001029e0(param_2);
  uVar4 = FUN_00102988(param_2);
                    /* try { // try from 001020ae to 001020b2 has its CatchHandler @ 001020eb */
  uVar1 = FUN_00102a38(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001035ff(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103198(param_1);
  uVar1 = FUN_00103782(uVar1,param_2,param_3);
  FUN_00103412(&local_10,uVar1);
  return;
}




void FUN_00102fce(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_0010301e(undefined8 param_1)

{
  return param_1;
}




void FUN_00103f2a(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101523) */
/* WARNING: Removing unreachable block (ram,0x0010152f) */

void FUN_00101510(void)

{
  return;
}




undefined8 FUN_00102988(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102ada(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103823(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_0010391a(&local_10);
  FUN_00103118(uVar1);
  return;
}




void FUN_00103f40(void)

{
  return;
}




void FUN_001016e9(undefined8 param_1)

{
  wchar_t *__s;
  undefined8 *puVar1;
  size_t sVar2;
  wchar_t *__dest;
  
  puVar1 = (undefined8 *)FUN_0010177a(param_1,2);
  __s = (wchar_t *)*puVar1;
  sVar2 = wcslen(__s);
  __dest = (wchar_t *)calloc(sVar2 + 1,4);
  if (__dest == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  wcscpy(__dest,__s);
  FUN_001039ed(__dest);
  free(__dest);
  return;
}




void FUN_00102e59(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001032a1(param_2);
  uVar2 = FUN_001032a1(param_1);
  FUN_001030e3(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103f14(void)

{
  return;
}




void FUN_00101e1c(long *param_1)

{
  FUN_0010217c(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101d70(param_1);
  return;
}




void FUN_00103b49(undefined4 param_1)

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




void FUN_001034c2(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010369a(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




undefined8 FUN_00103ea9(void)

{
  return 0;
}




long FUN_00102281(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102afc(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102afc(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00101d70(undefined8 param_1)

{
  FUN_00101dfc(param_1);
  return;
}




void FUN_00103732(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103823(param_2);
  uVar2 = FUN_00103823(param_1);
  FUN_00103849(uVar2,uVar1,param_3);
  return;
}




long FUN_00102898(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_00102f08(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ede(param_1,param_2);
  FUN_0010213a(param_1);
  return;
}




void FUN_00102b6e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103008(param_1);
  FUN_0010306d(*param_1,uVar1);
  return;
}




void FUN_00102a6e(void)

{
  return;
}




void FUN_00103428(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001035ff(param_1,param_2,param_3);
  return;
}




void FUN_00103f8d(void)

{
  return;
}




void FUN_001031e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103428(param_1,param_2,param_3);
  return;
}




void FUN_00104270(void)

{
  return;
}




void FUN_0010213a(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00101dd0(undefined8 param_1)

{
  FUN_0010211a(param_1);
  FUN_0010213a(param_1);
  return;
}




void FUN_00103508(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001036b2(param_2);
  uVar2 = FUN_001036b2(param_1);
  FUN_001036c4(uVar2,uVar1,param_3);
  return;
}




long FUN_00102bc0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102218(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102218(param_2);
  return lVar1 - *plVar2 >> 3;
}




undefined8 FUN_00103e9a(void)

{
  return 1;
}




void FUN_001037ee(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001038b7(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001032a1(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010338a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001039c7(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00103030(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010301e(param_3);
  FUN_00103332(param_1,param_2,uVar1);
  return;
}




undefined8 * FUN_00103782(undefined8 *param_1,long param_2,undefined8 *param_3)

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




undefined8 FUN_001029e0(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102ada(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101960(void)

{
  long in_FS_OFFSET;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101db0(local_58);
  local_70 = (void *)0x0;
  local_60 = malloc(0x32);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_60,0x41,0x31);
  *(undefined *)((long)local_60 + 0x31) = 0;
  local_70 = local_60;
  local_68 = FUN_00101eb6(local_58);
  FUN_00101f06(local_38,&local_68);
                    /* try { // try from 00101a12 to 00101aa7 has its CatchHandler @ 00101af3 */
  FUN_00101f34(local_58,local_38[0],1,&local_70);
  local_68 = FUN_00101eb6(local_58);
  FUN_00101f06(local_38,&local_68);
  FUN_00101f34(local_58,local_38[0],1,&local_70);
  local_68 = FUN_00101eb6(local_58);
  FUN_00101f06(local_38,&local_68);
  FUN_00101f34(local_58,local_38[0],1,&local_70);
  FUN_00101ffa(local_38,local_58);
                    /* try { // try from 00101aaf to 00101ab3 has its CatchHandler @ 00101ade */
  FUN_00101659(local_38);
  FUN_00101e6e(local_38);
  FUN_00101e6e(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010211a(undefined8 param_1)

{
  FUN_00102a6e(param_1);
  return;
}




void FUN_00102cac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103198(param_2);
  uVar2 = FUN_00103198(param_1);
  FUN_001031aa(uVar2,uVar1,param_3);
  return;
}




void FUN_00103ba3(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00103af3(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00103558(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103732(param_1,param_2,param_3);
  return;
}




bool FUN_0010409c(pthread_t *param_1)

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




void FUN_0010364d(undefined8 param_1)

{
  FUN_0010369a(param_1);
  return;
}




undefined8 FUN_001037cd(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102afc(&local_10);
  return *puVar1;
}




void FUN_00103f6c(void)

{
  return;
}




void FUN_00103ee8(void)

{
  return;
}




void FUN_001033dd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103589(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001027e6(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021f6(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103f09(void)

{
  return;
}




void FUN_001015c9(undefined8 param_1)

{
  wchar_t *__src;
  undefined8 *puVar1;
  size_t sVar2;
  wchar_t *__dest;
  
  puVar1 = (undefined8 *)FUN_0010177a(param_1,2);
  __src = (wchar_t *)*puVar1;
  sVar2 = strlen((char *)__src);
  __dest = (wchar_t *)calloc(sVar2 + 1,4);
  if (__dest == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  wcscpy(__dest,__src);
  FUN_001039c7(__dest);
  free(__dest);
  return;
}




void FUN_0010312a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00103198(param_3);
  uVar2 = FUN_00103198(local_28);
  uVar3 = FUN_00103198(local_20);
  uVar1 = FUN_001033dd(uVar3,uVar2,uVar1);
  FUN_00103412(&local_30,uVar1);
  return;
}




undefined8 FUN_0010391a(undefined8 *param_1)

{
  return *param_1;
}




ulong FUN_00103cb7(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103273(undefined8 param_1,undefined8 param_2)

{
  FUN_001034c2(param_1,param_2,0);
  return;
}




void FUN_00101b1d(void)

{
  long in_FS_OFFSET;
  wchar_t *local_70;
  undefined8 local_68;
  wchar_t *local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101db0(local_58);
  local_70 = (wchar_t *)0x0;
  local_60 = (wchar_t *)malloc(200);
  if (local_60 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  wmemset(local_60,L'A',0x31);
  local_60[0x31] = L'\0';
  local_70 = local_60;
  local_68 = FUN_00101eb6(local_58);
  FUN_00101f06(local_38,&local_68);
                    /* try { // try from 00101bd4 to 00101c69 has its CatchHandler @ 00101cb5 */
  FUN_00101f34(local_58,local_38[0],1,&local_70);
  local_68 = FUN_00101eb6(local_58);
  FUN_00101f06(local_38,&local_68);
  FUN_00101f34(local_58,local_38[0],1,&local_70);
  local_68 = FUN_00101eb6(local_58);
  FUN_00101f06(local_38,&local_68);
  FUN_00101f34(local_58,local_38[0],1,&local_70);
  FUN_00101ffa(local_38,local_58);
                    /* try { // try from 00101c71 to 00101c75 has its CatchHandler @ 00101ca0 */
  FUN_001016e9(local_38);
  FUN_00101e6e(local_38);
  FUN_00101e6e(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103f4b(void)

{
  return;
}




void FUN_00103ac8(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103ed2(void)

{
  return;
}




void FUN_00102f3e(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102e22(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00102a38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f98(param_1,param_2,param_3);
  return;
}




void FUN_0010338a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103f61(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ea8)();
  return;
}




undefined8 FUN_00103412(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010306d(undefined8 param_1,undefined8 param_2)

{
  FUN_00103376(param_1,param_2);
  return;
}




void FUN_001032ee(void)

{
  return;
}




void FUN_00101cdf(void)

{
  FUN_00101960();
  FUN_00101b1d();
  return;
}




void FUN_0010216c(void)

{
  return;
}




void FUN_00104200(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void _FINI_0(void)

{
  if (DAT_00108020 == '\0') {
    if (PTR___cxa_finalize_00107fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00108008);
    }
    FUN_00101510();
    DAT_00108020 = 1;
    return;
  }
  return;
}




undefined8 FUN_00102910(undefined8 param_1)

{
  return param_1;
}




void FUN_00103bcb(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




int FUN_00103eb8(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102aaf(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ff5(param_1,param_2);
  return;
}




void FUN_00103ef3(void)

{
  return;
}




void FUN_00103f77(void)

{
  return;
}




void FUN_00102ba2(undefined8 param_1)

{
  FUN_00103008(param_1);
  return;
}




void FUN_00101d90(undefined8 param_1)

{
  FUN_00101dd0(param_1);
  return;
}




void FUN_0010321e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102910(param_1);
  FUN_00103459(uVar1);
  return;
}




void FUN_00103bf6(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001039ed(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00103849(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00103198(param_3);
  uVar2 = FUN_00103198(local_28);
  uVar3 = FUN_00103198(local_20);
  uVar1 = FUN_0010392f(uVar3,uVar2,uVar1);
  FUN_00103412(&local_30,uVar1);
  return;
}




undefined8 FUN_001040f7(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001031aa(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void * FUN_00103964(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00103376(void)

{
  return;
}




undefined8 FUN_00103118(undefined8 param_1)

{
  return param_1;
}




void FUN_00102b0e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_0010301e(param_3);
  uVar2 = FUN_00103008(param_1);
  FUN_00103030(*param_1,uVar2,uVar1);
  return;
}




undefined8 FUN_0010369a(void)

{
  return 0xfffffffffffffff;
}




ulong FUN_00103dbb(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050b0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010392f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103964(param_1,param_2,param_3);
  return;
}




void FUN_00103a9d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_001028bf(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102eb1(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00103edd(void)

{
  return;
}




void FUN_00103a73(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102f98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103301(param_1,param_2,param_3);
  return;
}




void FUN_00101db0(undefined8 param_1)

{
  FUN_00101d90(param_1);
  return;
}




void FUN_001030e3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001033a8(param_1,param_2,param_3);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101564) */
/* WARNING: Removing unreachable block (ram,0x00101570) */

void FUN_00101540(void)

{
  return;
}




long FUN_00103589(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_00101e6e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021b6(param_1);
  FUN_001021c8(*param_1,param_1[1],uVar1);
  FUN_00101e1c(param_1);
  return;
}



